#include<stdio.h>
#include<stdlib.h>



struct queue {
	
	int size;
	int *Q;
	int front;
	int rear;
	
};


void enqueue(struct queue *q,int x) {
	
	if(q->rear == q->size -1) {
		
		printf("Queue is FUll \n");

	}
	else {
		
		q->rear ++;
		q->Q[q->rear] = x;
		
	}	
	
}

int dequeue (struct queue *q) {
	
	int x = -1;
	if(q->front == q->rear) {
		
		printf("Queue is empty \n");
	}
	else {
		q->front++;
		x = q->Q[q->front];
	}
	return x;
}

void display(struct queue *q ){
	int i;
	printf("DISPLAYING QUEUE : ");
	for(i = q->front + 1 ; i <= q->rear ; i++) 
	{	
		printf("%d\t",q->Q[i]);
	}
}

int main() {
	
	struct queue q;
	printf("Enter size ... ");
	scanf("%d",&q.size);
	q.Q = (int *)malloc(q.size*sizeof(int));
	q.front = q.rear = -1;
	
	enqueue(&q,10);
	enqueue(&q,20);
	enqueue(&q,30);
	enqueue(&q,40);
	enqueue(&q,50);
	printf("DEQUEUE ELEMENT : %d\n",dequeue(&q));
	
	display(&q);
	return 0;
}
