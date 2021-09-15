#include<stdio.h>
#include<stdlib.h>

struct Queue {
	
	int front;
	int rear;
	int size;
	int *a;
	
};

void enqueue(struct Queue *q,int item) {

	if(q->rear == q->size - 1){
		printf("\nQUEUE IS FULL\n");
	}
	else {
		q->rear++;
		q->a[q->rear] = item;
	}

}

void display(struct Queue *q) {
	
	int i;
	for(i = q->front+1 ; i<=q->rear ; i++) {
		
		printf("%d\t",q->a[i]);
		
	}
}

int dequeue(struct Queue *q ){
	
	int x = -1;
	if(q->front == q->rear ){
		printf("\nQUEUE IS EMPTY\n");
	}
	else{
		q->front ++ ;
		x = q->a[q->front];
			
	}
	return x;
}


int main() {
	
	struct Queue q;
	q.a = (int *)malloc(5*sizeof(int));
	q.size = 5 ;
	q.front = q.rear = -1;
	enqueue(&q,10);
	enqueue(&q,20);
	enqueue(&q,30);
	enqueue(&q,40);
	enqueue(&q,50);
	printf("DEQUEUE : %d\n",dequeue(&q));
	display(&q);
	
}
