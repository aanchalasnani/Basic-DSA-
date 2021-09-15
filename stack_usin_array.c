#include<stdio.h>
#include<stdlib.h>
int arr[50];
int n = 50;
int top = -1;

// push , pop 

void push(int item) {
	
	if(top == n-1) {
		printf("\nSTACK OVERLFOW\n");
	}
	else {
		top++;
		arr[top] = item;
	}
}

int pop() {
	int item = -1;
	if(top == -1) {
		printf("\nSTACK UNDERFLOW\n");
	}
	else {
		item = arr[top];
		top--;
		
	}
	return item;
}

void display() {
	int i ;
	printf("\nDISPLAYING STACK : ");
	for(i = top ; i>=0 ; i--) {
		printf("%d\t",arr[i]);
	}
	
}

int main() {
	printf("\ncalling POP : %d\n",pop());
	push(10);
	push(20);
	push(100);
	push(200);
	display();
	printf("\ncalling POP : %d\n",pop());
	display();
	
}

