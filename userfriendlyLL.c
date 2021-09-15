#include<stdio.h>
#include<stdlib.h>

struct node {
	
	int data ;
	struct node *next;
	
}*first;


void create(int n) {
	
	int i=0,x,f;
	struct node *last,*t;
	printf("enter the value to be inserted   ");
	scanf("%d",&f);
	first = (struct node *)malloc(sizeof(struct node));
	first->data = f;
	first->next = NULL;
	
	last = first;
	
	for(i=1;i<n;i++)
	{
		printf("enter the value to be inserted   ");
		scanf("%d",&x);
		t = (struct node *)malloc(sizeof(struct node));
		t->data = x;
		t->next = NULL;
		last->next = t;
		last = t;
	}
	
	
}

//void display_recursion(struct node *p) 
//{
//	
//	if(p!=NULL)
//	{
//		printf("%d", p->data);
//		display_recursion(p->next);
//	}
//}


void display(struct node *p) //without recursion
{
	
	while(p!=NULL)
	{
		printf("     %d    ",p->data);
		p=p->next;
	}
}

int main()
{
	int n;
	
	printf("\nenter the number of nodes u want   ");
	scanf("%d",&n);
	create(n);
	display(first);
//	display_recursion(first);
}
