#include<stdio.h>
#include<stdlib.h>

struct stack {
	int size;
	int top;
	int *arr;
};

void create(struct stack *st) {
	
	printf("enter the size    ====>    ");
	scanf("%d",&st->size);
	st->top = -1;
	st->arr = (int *)malloc(st->size*sizeof(int));
		
}

void push(struct stack *st,int data) {
//	int data;
	
	if(st->top==st->size - 1) {
		
		printf("stack overflow\n");
	}
	else {

//	printf("enter the element you want to push / insert ===>    ");
//	scanf("%d",&data);
	st->top++;
	st->arr[st->top] = data;
	}
	
}
void display(struct stack *st) {
	int i;
	for(i=st->top ; i>=0 ; i--)
	{
		printf("    %d     ",st->arr[i]);
	}
}

 void pop (struct stack *st) {
 	
	int deleted;
	if(st->top==-1){
		printf("stack underflow\n");
	}
	else {
		deleted = st->arr[st->top];
		st->top--;
		printf("the popped / deleted element is ===> %d\n",deleted);
		
	}
}


int main()
{
	struct stack st;
	
	
	create(&st);
	push(&st,10);
	push(&st,20);
	push(&st,30);
	push(&st,40);
	pop(&st);
	display(&st);
	return 0;

}
