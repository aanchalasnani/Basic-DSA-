#include<stdio.h>
#include<stdlib.h>

int a[100] ;
int top = -1;


void push(int x) {
	
	if(a[top] == x) {
		printf("\nstack overflow\n");
	}
	else {
		top++;
		a[top] = x;
	}
	
}

void pop() {
	
	if(top == -1) {
		printf("\nStack underflow\n");
	}
	else {
		top--;
	}
}

void display() {
	int i;
	printf("Displaying Stack\n")
	for(i = top ; i>=0 ; i--) {
		printf("%d\t",a[i]);
	}
}

int main() {
	
	
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	pop();
	display();
	 
}
