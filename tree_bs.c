#include<stdlib.h>
#include<stdio.h>

struct node {
	
	struct node *lchild;
	int data;
	struct node *rchild;
	
}*root = NULL;

void insert(int key)
{
	struct node *p;
	struct node *t,*r;
	t = root;
	if(root==NULL) {
		
		p=(struct node*)malloc(sizeof(struct node));
		p->data = key;
		p->lchild = p->rchild = NULL;
		
		root = p;
		return ;
		
	}
	while(t!=NULL) {
		
		r=t;
		
		if(key<t->data) {
			t = t->lchild;
		}
		else if(key>t->data){
			t=t->rchild;	
		}
		else {
			return ;
		}
	}
	p = (struct node *)malloc(sizeof(struct node));
	p->data = key;
	p->lchild = p->rchild = NULL;
	
	if(key > r->data) {
		r->rchild = p;
	}
	else {
		r->lchild = p;
	}
	
}


void inorder(struct node *p) {
	if(p!=NULL) {
		inorder(p->lchild);
		printf("%d\t",p->data);
		inorder(p->rchild);
	}
}

int main() {
	
	insert(6);
	insert(3);
	insert(9);
	insert(4);
	insert(11);
	
	inorder(root);
	
	return 0;
}
