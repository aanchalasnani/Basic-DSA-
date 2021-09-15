//stack using dynamic array
// by Aanchal Asnani

#include<stdio.h>
#include<stdlib.h>

struct stack {
	int size;  //size of array
	int *arr; //pointer to array
	int top;
}st;

void create(struct stack *st , int size) {
	
	st->size = size;
	st->arr = (int *)malloc(st->size*(sizeof(int)));
	st->top = -1;
	
}

void push(struct stack *st , int item )
{
	
	
	if(st->top == st->size - 1) {
		printf("Stack Overflow\n");
	}
	else {
		st->top++;
		st->arr[st->top] = item;
	}
}

int pop(struct stack *st) {
	int x = -1;
	if(st->top == -1) {
		printf("Satck Underflow\n");
	}
	else {
		x =	st->arr[st->top] ;
		st->top--;
	}
	return x;
	
}

void display(struct stack *st) {
	
	printf("\n\nDisplaying Stack : \n");
	int i;
	for(i = 0; i<=st->top; i++) {
		printf("%d ",st->arr[i]);
	}
}

int main() {
	
	struct stack st;
	create(&st , 10);
	
	push(&st , 100);
	push(&st , 200);
	push(&st , 300);
	push(&st , 400);
	printf("POP : %d ",pop(&st));
	display(&st);
	
}
