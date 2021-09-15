//stack using linked list
//by Aanchal Asnani


#include<stdio.h>
#include<stdlib.h>


struct node {
	
	int data;
	struct node *next;
}*first = NULL;

void push(int x) {
	
	struct node *temp;
	struct node *last;
	
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = x;
	temp->next = NULL;
	last = first;
	if(temp==NULL) {
		printf("STACK OVERFLOW\n");
	}
	else if(first == NULL) {
		first = temp;
	}
	else {
		temp->next = first;
		first = temp;
	}
	
}

int pop() {
	int x = -1;
	if(first == NULL) {
		printf("STACK UNDERFLOW\n");
	}
	else {
		x = first->data;
		first = first->next;
	}
	return x;
}

void display() {
	
	printf("\n\nDISPLAYING STACK : \n\n");
	while(first!=NULL) {
		
		printf("%d ",first->data);
		first = first->next;
		
	}
}

int main() {
	
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	printf("POP : %d\n",pop());
	display();
	
}

