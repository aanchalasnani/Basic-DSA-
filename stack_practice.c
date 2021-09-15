#include<stdio.h>
#include<stdlib.h>

struct node {
	
	int data ;
	struct node *next ;
}*top = NULL;


void push (int x) {
	
	struct node *t;
	t = (struct node *)malloc(sizeof(struct node));
	if(t==NULL) {
		
		printf("stack overflow\n");
	}
	else {
		
		t->data = x;
		t->next = top;
		top= t;
		
	}
	
}


int pop() {
	
	struct node *p;
	int x =-1;
	p = top ;
	if(top == NULL) {
		
		printf("stack underflow \n");
	}
	else {
		top = top->next;
		x = p->data;
		free(p);
	}
	
	return x;
	
	
}

void display() {
	
	struct node *p;
	p=top;
	printf("\n\nDisplaying Stack ===>\n\n");
	
	while(p!=NULL) {
		
		printf("%d    ",p->data);
		p=p->next;
	}
	printf("\n\n");
}


int main() {
	
	
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	
	
	display();
	
	
	printf("%d   ",pop());
}
