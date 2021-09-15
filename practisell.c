#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
}*first;


void create (int a[] , int n)
{
	int i;
	struct node *t,*last;
	first = (struct node *)malloc(sizeof(struct node));
	first->data = a[0];
	first->next = NULL;
	last = first ; 
	
	for(i=1 ; i<n ; i++){
		
		t = (struct node *)malloc(sizeof(struct node));
		t->data = a[i];
		t->next = NULL;
		last->next = t;
		last = t;
		
	}
	
}

void display(struct node *p)  // traversing
{
	int num=0,sum=0,max=NULL,z=0;
	
	while(p!=NULL)
	{
		printf("   %d   ",p->data);
		sum=sum +  p->data ;
		if(p->data > max)
		{
			max=p->data;
		}
		num++;
		p=p->next;
		
	}
	printf("\n the number of nodes = %d",num); //nummber of nodes
	printf("\n the sum of all nodes = %d",sum); // sum of nodes
	printf("\n the max of all nodes = %d",max); //max
	
	
}


int main()
{
	int search;
	
	int a[] = {100,200,600,400,500};
	
	create(a,5);
	display(first);
	
	
	
}
