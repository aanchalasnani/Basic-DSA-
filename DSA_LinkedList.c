//implementation of linked list  + all operations
//by Aanchal Asnani

#include<stdio.h>
#include<stdlib.h>

struct node {
	
	int data;
	struct node *next;
	
}*first = NULL;

void create(int n) {
	
	struct node *temp , *last;
	
	first = (struct node *)malloc(sizeof(struct node));
	first->data = 10;
	first->next = NULL;
	
	last = first;
	int i;
	
	for(i=2;i<=n;i++) {
		
		temp = (struct node *)malloc(sizeof(struct node));
		temp->data = i*10;
		temp->next=NULL;
		last->next=temp;
		last = temp;
	}
	
}

void insert(int x) {
	int pos,i;
	printf("Enter position of insertion : ");
	scanf("%d",&pos);
	struct node *temp,*l,*m;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = x;
	temp->next=NULL;
	l = first;
	if(pos==1) //first position
	{
		temp->next=first;
		first = temp;
	}
	else {
		for(i=0;i<pos-1;i++) {
			m=l;
			l=l->next;
		}
		temp->next = l;
		m->next=temp;
	}
}

void delet() //deleting nodes
{
	int x,i,pos;
	struct node *temp;
	struct node *m,*l;
	temp = first;
	l = first;
	printf("\n\nEnter position of deletion : ");
	scanf("%d",&pos);
	if(pos==1) { 
	
	temp=first;
	x=temp->data;
	first=first->next;
	free(temp);
		
	}
	else {
		
		for(i=0;i<pos-1;i++) {
			m=l;
			l=l->next;
		}
		x=l->data;
		m->next = l->next;
		free(l);
	}
	
}


void display() //displaying Linked List
{
	
	struct node *temp = first;
	printf("\nDisplaying LinkedList : ");
	while(temp!=NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	
}

void count_node() {
	struct node *temp = first;
	int count=0;
	while(temp!=NULL) {
		temp = temp->next;
		count++;
	}
	printf("\n\nTotal nodes : %d\n",count);
}

void reverse_LL() {
	
	struct node *prev , *nxt , *curr;
	
	prev=NULL;
	curr=NULL;
	nxt=first;
	
	while(nxt!=NULL){
		
		prev=curr;
		curr=nxt;
		nxt = nxt->next;
		curr->next=prev;
	}
	first = curr;
	printf("\n\n\n*********LINKED LIST REVERSED**********\n");
}

int main() {
	
	
	create(5);
	display();
	count_node();
	insert(100);
	display();
	delet();
	display();
	reverse_LL();
	display();
	
}
