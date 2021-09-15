//program for binary search tree practice

#include<stdio.h>
#include<stdlib.h>

//creating structure of node

struct node {
	
	struct node* lchild;
	
	int data;

	struct node *rchild;
	
}*root = NULL; 

void insert(int x) {
	struct node *p,*r,*t;
	r  = root;
	if(root == NULL) {
		p = (struct node *)malloc(sizeof(struct node));
		p->data = x;
		p->lchild = p->rchild = NULL;
		root = p;
		//printf("%d",root->data);
		return;
	}
	else {
		
		while(r!=NULL) {
			t = r;
			if(x>r->data) {
				
				r = r->rchild;
				
			}
			else if(x<r->data) {
				r = r->lchild;
			}
			else return;
			
		}
		p=(struct node *)malloc(sizeof(struct node));
		p->data = x;
		p->lchild = p->rchild = NULL;
		if(x>t->data) {
			t->rchild = p;
		}
		else {
			t->lchild = p;
		}
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
	insert(7);
	insert(5);
	insert(3);
	insert(9);
	insert(4);
	insert(11);
	inorder(root);
	
}
