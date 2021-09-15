#include<stdio.h>
#include<stdlib.h>
int stack[5], n=5, top=-1;


void push()
{
	int data;
	printf("enter the data to be enter ===>    ");
	scanf("%d",&data);
	if(top==n-1)
	{
		printf("stack overflow");
	}
	else {
		top++;
		stack[top] = data;
	}
}

void display()
{
	int i ;
	printf(" \n displaying stack ===> \n");
	for(i=top;i>=0;i--)
	{
		printf("   %d           ", stack[i]);
	}
	printf("\n");

}

void pop()
{
	int deleted;
	if(top == -1)
	{
		printf("stack underflow or empty stack");
		
	}
	else {
		deleted = stack[top];
		top--;
		printf("\n the deleted element is %d  \n",deleted);
	}
}


void peek()  {
	
	if(top==-1)
	{
		printf("stack underflow ");
	}
	else {
		printf("\n the top most element is %d  \n",stack[top]);
	}
}


int main()
{
	push();
	push();
	push();
	push();

	pop();

	display();
	
	peek();
	
	
	return 0;
}
