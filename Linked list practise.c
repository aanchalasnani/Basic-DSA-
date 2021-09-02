#include<stdio.h>
#include<stdlib.h>

struct node {
	
	int data;
	struct node * next;
	
}*first = NULL ;

void create(int n) {
	
	struct node *temp , *last;
	int element;
	
	printf("enter 1 node data => ");
	scanf("%d",&element);
	first = (struct node *)malloc(sizeof(struct node));
	first->data = element;
	first->next = NULL;
	int i;
	last = first;
	for(i = 1 ; i<n ;i++) {
		
		printf("enter %d node data => ",i+1 );
		scanf("%d",&element);
		temp = (struct node *)malloc(sizeof(struct node));
		temp->data = element;
		temp->next = NULL;
		last->next = temp;
		last = temp;
	}
	
}

void display() {
	struct node *p;
	p=first;
	printf("\n\nDisplaying Linked List => ");
	while(p!=NULL) {
		
		printf("%d\t",p->data);
		p=p->next;
	}
	
}

int main() {
	
	int n;
	printf("enter number of nodes u want => ");
	scanf("%d",&n);
	printf("\n\n");
	
	create(n);
	display(first);
}
