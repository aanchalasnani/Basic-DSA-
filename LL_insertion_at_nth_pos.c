#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* next;
}*first;

void create(int n) {
	
	struct node * temp ;
	struct node *last ;
	int item , i;
	
	first = (struct node*)malloc(sizeof(struct node));
	printf("enter the data ==>  ");
	scanf("%d",&item);
	first->data = item ;
	first -> next = NULL ;
	last = first ;
	
	for(i=0;i<n-1; i++){
		printf("enter the data ==>  ");
		scanf("%d",&item);
		temp = (struct node *) malloc(sizeof(struct node));
		temp->data = item ;
		temp->next = NULL ;
		
		last -> next = temp ;
		last = temp ;
	}
}

void insert_tail(int x) {
	
	struct node *p = first;
	struct node *temp ;
	temp =(struct node *)malloc(sizeof(struct node));
	temp->data = x;
	temp->next = NULL;
	while(p->next != NULL) {
		p=p->next;
	}
	p->next = temp;
}

void insert () {
	struct node *p;
	struct node *temp;
	int index,item,i;
	p = first ;
	printf("at what position to insert ==>  ");
	scanf("%d",&index);
	printf("enter the value of node ==>  ");
	scanf("%d",&item);
	temp = (struct node *)malloc(sizeof(struct node));
	temp ->data = item;
	temp ->next = NULL;
	for(i = 0 ; i< index - 2 ; i++)
	{
		p = p->next;
	}
	temp->next = p->next;
	p->next = temp;
}

void display ( struct node *z) {
	
	while(z!=NULL) {
		printf("%d   ",z->data);
		z = z->next ;
	}
}

int main () {
	
	int n;
	printf("enter the no. of nodes you want ==>  ");
	scanf("%d",&n);
	create(n);
	insert();
	display(first);
}
