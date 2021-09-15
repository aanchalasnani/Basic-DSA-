#include<stdio.h>
#include<stdlib.h>

struct queue {
	
	int size;
	int front;
	int rear;
	int *Q;
	
};

void enqueue(struct queue *q , int x) {
	
	if((q->rear+1)%q->size == q->front) {
		printf("\nQueue is full ");
	}
	else {		
		q->rear = (q->rear + 1 )%q->size ;
		q->Q[q->rear] = x ;
	}
}

int dequeue(struct queue *q) {
	
	int x = -1;
	
	if(q->rear == q->front) {
		
		printf("\nQueue if empty....\n");
	}
	else {
		q->front = (q->front+1)%q->size;
		x = q->Q[q->front];
	}
	return x;
}

void display(struct queue *q) {
	int i = q->front +1 ;
	printf("\n\nDisplaying Queue\n");
	do {
		printf("%d\t",q->Q[i]);
		i=(i+1)%q->size;
	}
	while(i!=(q->rear+1)%q->size);
	printf("\n");
}

int main() {
	
	struct queue q;
	
	printf("Enter the Size of Array  :");
	scanf("%d",&q.size);
	
	q.Q = (int *)malloc(q.size*sizeof(int));
	q.front = q.rear = 0 ;
	
	enqueue(&q,10);
	enqueue(&q,20);
	enqueue(&q,30);
	enqueue(&q,40);
	enqueue(&q,50);
	
	printf("\nDequede element : %d",dequeue(&q));

	display(&q);
	
	printf("\nDequede element : %d",dequeue(&q));
	
	display(&q);
}
