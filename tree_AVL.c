#include<stdio.h>
#include<stdlib.h>

struct node {
	
	struct node *lchild;
	int data ;
	int height;
	struct node *rchild;
	
}*root = NULL;

int node_height(struct node *p) {
	
	int hl, hr;
	
	hl= p && p->lchild?p->lchild->height:0;
	hr= p && p->rchild?p->rchild->height:0;
	
	return hl>hr?hl+1:hr+1;
}

int balance_factor(struct node *p) {
	
	int hl=p && p->lchild?p->lchild->height:0;
	int hr= p && p->rchild?p->rchild->height:0;
	
	return hl-hr;
}

struct node * LLrotation(struct node *p) {
	
	struct node *pl = p->lchild;
	struct node *plr = pl->rchild;
	
	
	pl->rchild = p;
	p->lchild = plr;
	
	p->height = node_height(p);
	pl->height = node_height(pl);
	
	if(root == p) {
		
		root = pl;
	}
	
	return pl;
}

struct node * LRrotation(struct node *p) {
	
	
	struct node *pl = p->lchild;
	struct node *plr = pl->rchild;
	
	pl->rchild = plr->lchild;
	p->lchild = plr->rchild;
	
	plr->lchild = pl;
	plr->rchild = p;
	
	pl->height = node_height(pl);
	p->height = node_height(p);
	plr->height = node_height(plr);
	
	if(root == p) 
		root =plr;
		
		
	return plr;
	
}

struct node * RRrotation(struct node *p) {
	return NULL;
}

struct node * RLrotation(struct node *p) {
	return NULL;
}


struct node * rinsert(struct node *p , int key) {
	
	struct node *t=NULL;
	
	if(p==NULL) {
		t = (struct node *)malloc(sizeof(struct node));
		t->data = key;
		t->height = 1;
		t->lchild = t->rchild = NULL;
		return t;
	}
	if(key<p->data) {
		p->lchild = rinsert(p->lchild,key);
	}
	else if(key > p->data) {
	
	p->rchild = rinsert(p->rchild,key);
	}
	p->height = node_height(p);
	
	if(balance_factor(p)==2 && balance_factor(p->lchild)==1) {
		
		return LLrotation(p);
		
	}
	else if(balance_factor(p)==2 && balance_factor(p->lchild)==-1) {
		
		return LRrotation(p);
		
	}
	else if(balance_factor(p)==-2 && balance_factor(p->lchild)==-1) {
		
		return RRrotation(p);
		
	}
	else if(balance_factor(p)==-2 && balance_factor(p->lchild)==1) {
		
		return RLrotation(p);
		
	}
	
	
	return p;
}

void inorder(struct node *p) {
	
	if(p!=NULL) {
		
		inorder(p->lchild);
		printf("%d\t",p->data);
		inorder(p->rchild);
	}
}


int main() {
	
	root = rinsert(root,50);
	rinsert(root,10);
	rinsert(root,20);
	
	printf("\n\nRoot : %d\n\n",root->data);
	inorder(root);
	
	return 0;
	
}
