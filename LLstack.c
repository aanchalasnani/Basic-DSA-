#include<stdio.h>
#include<stdlib.h>




struct node {
	int data;
	struct node * link ;
}*top = NULL;



void push(int item)
{
	int i;
	struct node *temp;

	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = item ;
	temp->link = top ;
	top = temp;
	
}

int pop() {
	
	struct node *temp;
	int x;
	temp = top;
	x = top->data;
	top = top->link;
	free(temp);
	return x;
}

void display(struct node *head)
{
	printf("\nDISPLAYING STACK USING LL :\n");
    while(head!=NULL)
	{
		printf("     %d    ",head->data);
		head=head->link;
	}
    
}


int main() {
	

	push(10);
	push(20);
	push(10);
	push(20);
	
	printf("POPPED DATA : %d",pop());
	display(top);
	
}
