#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
}*front = NULL , *rear = NULL ;


void enqueue(int x) {
	
	struct node *t;
	t = (struct node *)malloc(sizeof(struct node));
	if(t  == NULL) {
		printf("Queue Full");
	}
	else {
		
		t->data = x ;
		t->next = NULL ;
		if(front == NULL) {
			rear = front = t ;
		}
		else {
			rear->next = t;
			rear = t;
		}
	}
}
	
int dequeue() {
	int x = -1 ;
	struct node *t;
	
	if(front == NULL) {
		printf("Queue iss empty");
	}
	else {
		x = front->data ;
		t = front;
		front = front->next;
		free(t);
	}
	return x ;
}	

void display() {
	
	struct node *p;
	p = front ;
	while(p!=NULL) {
		
		printf("%d\t",p->data);
		p=p->next;
	}
	printf("\n");
}

int main() {
	
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);

	display();
	
	printf("\nDEQUEUE : %d\n\n",	dequeue());
	display();
	
}


