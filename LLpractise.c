#include<stdio.h>
#include<stdlib.h>

struct node {
	
	int data;
	struct node *next;
}*first,*second;

void create(int n) {
	
	int item,i;
	struct node *temp;
	struct node *last;
	
	first = (struct node *) malloc (sizeof(struct node));
	printf("enter the data :  ");
	scanf("%d",&item);
	first->data = item ;
	first->next = NULL ;
	last = first;
	
	for(i = 1; i < n ; i++)	{
		
		printf("enter the data :  ");
		scanf("%d",&item);
		temp =(struct node *)malloc (sizeof(struct node));
		temp->data = item ;
		temp -> next = NULL ;
		last -> next = temp ;
		last = temp ;
	}
}
void create2(int n) {
	
	int item,i;
	struct node *temp;
	struct node *last;
	
	second = (struct node *) malloc (sizeof(struct node));
	printf("enter the data :  ");
	scanf("%d",&item);
	second->data = item ;
	second->next = NULL ;
	last = second;
	
	for(i = 1; i < n ; i++)	{
		
		printf("enter the data :  ");
		scanf("%d",&item);
		temp =(struct node *)malloc (sizeof(struct node));
		temp->data = item ;
		temp -> next = NULL ;
		last -> next = temp ;
		last = temp ;
	}
}

void display(struct node * p) {
	
	while(p!=NULL)
	{
		printf("%d   ",p->data);
		p = p-> next;
	}
}

void concatenate() {
	
	struct node *p;
	p = first ;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next = second ;
}

int main()
{
	int n,m;
	printf("enter the no of nodes u wnt to ccreate in 1 linklist   ");
	scanf("%d",&n);
	
	create(n);
	printf("enter the no of nodes u wnt to ccreate in 2 linklist   ");
	scanf("%d",&m);	
	create2(m);
	printf("first === > \n");
	display(first);
	printf("\n\n");
	printf("second === > \n");
	display(second);
	printf("\n\n");
	
	printf("conctenate ===> \n");
	concatenate();
	display(first);
	
}
