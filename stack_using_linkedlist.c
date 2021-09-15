#include<stdio.h>
#include<stdlib.h>

struct node {
	
	int data;
	struct node *next;
}*top = NULL;


void push(int x) {
	
	struct node *temp ;
	temp = (struct node *)malloc(sizeof(struct node));
	if(temp == NULL) {
		printf("stack overflow");
	}
	else {
	temp->data = x;
	temp->next = top ;
	top = temp;
}
}

int pop() {
	
	struct node *temp;
	int x= -1;
	temp = top;
	if(top == NULL) {
		printf("stack underflow");
	}
	else {
	x = temp->data;
	top = top->next;
	free(temp);
	
}
return x;
	
}

void display() {
	
	struct node *temp;
	temp = top;
	printf("\nDISPLAYING STACK USING LL :\n");
	while(temp!=NULL) {
		printf("%d    ",temp->data);
		temp = temp->next;
	}
}


int main() {
	
	
	push(10);
	push(20);
	push(30);
	push(40);
	printf("POPPED DATA : %d \n",pop());
	display();
}
