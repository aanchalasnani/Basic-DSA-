#include<stdio.h>
#include<stdlib.h>



struct node {
	
	int data ;
	struct node *link ;
}*head;


void create() {
	
	int n ,i,item,var;
	struct node *temp;
	struct node *neew;
	printf("\nenter the number of nodes u want\n ");
	scanf("%d",&n);
	
	head  = (struct node *)malloc (sizeof(struct node));
	printf("\nenter the data =====> \t");
	scanf("%d",&item);
	head->data = item;
	head->link = NULL ;
	
	neew=head;
	
	for(i=1 ; i<n ; i++)
	{
		printf("\nenter the data =====> \t");
		scanf("%d",&item);
		
		temp = (struct node *)malloc(sizeof(struct node));
		
		temp->data = item ;
		temp->link = NULL ;
		
		neew->link = temp ;
		neew = temp ;
		
		
	}
	
	
}

void display(struct node *p) //without recursion
{
	printf("\ndisplaying data =>\n");
	while(p!=NULL)
	{
		printf("%d    ",p->data);
		p=p->link;
	}
}


int main() {
	
	create();
	display(head);
}
