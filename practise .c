#include<stdio.h>
#include<stdlib.h>

struct node{ 
	 int data;
	 struct node *next ;
}*first = NULL;


void create(int n) 
{
	int i , item;
	struct node *temp , *last;
	first = (struct node *)malloc(sizeof(struct node));
	printf("enter the data ==> ");
	scanf("%d",&item);
	first->data = item ;
	first->next = NULL;
	last = first;
	for(i=1;i< n;i++) {
		
		temp = (struct node *)malloc(sizeof(struct node));
		printf("enter the data ==> ");
		scanf("%d",&item);
		temp->data = item;
		temp->next = NULL;
		last->next = temp;
		last = temp;
	}
}


void display(struct node *p) {
	
	while(p!=NULL) {
		
		printf("%d\t",p->data);
			p = p->next ;
		
	}

}

int main () {
	
	
	system("color 3E");
	create(5);
	display(first);
}
