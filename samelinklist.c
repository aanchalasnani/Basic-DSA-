#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};

int main()
{	int n;
	char ch;
	struct node* head=NULL;
	struct node* temp;
	printf("Would you like to enter a value ?");
	scanf("%c",&ch);

	
	while(ch=='Y'|| ch=='y')
	{
		fflush( stdin );
		printf("\nGive Value :");
		scanf("&d",&n);
		fflush( stdin );
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=n;
		temp->next=head;
		head=temp;
		printf("\nWould you like to enter a value ?");
		scanf("%c",&ch);
		fflush( stdin );
	}
	
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	
}
