#include<stdio.h>
#include<stdlib.h>
struct queue {

 int size;
 int front;
 int rear;
 int *Q;
};
void enque_frontend(struct queue *q , int x) {

 if(q->rear == q->size -1) {
  printf("\nQueue is full....\n");
 }
 else {
 
  q->rear++;
  q->Q[q->rear] = x ;
 }
}
void enque_rearend(struct queue *q , int x){
if(q->front==0 && q->rear== q->size-1){
printf("Queue is full");
}
else if(q->front==-1){
q->front++;
q->rear++;
q->Q[q->front] = x;


}
else{
q->front--;
q->Q[q->front] = x;


}
}
int dequeue_frontend(struct queue *q) {

 int x = -1;

 if(q->rear == q->front) {
 
  printf("\nQueue if empty....\n");
 }
 else {
  q->front++;
  x = q->Q[q->front];
 }
 return x;
}
int dequeue_rearend(struct queue *q){
int x=-1;
if(q->rear=-1){

printf("queue is empty");
}
else if(q->rear == q->front){
         q->Q[q->rear]=x;
        q->front=-1;
        q->rear=-1;

}
else{
x = q->Q[q->rear];
q->rear--;

}
return x;
}
void display(struct queue *q) {
 int i;
 printf("\n\nDisplaying Queue\n");
 for(i = q->front+1  ; i<=q->rear; i++) {
  printf("%d\t",q->Q[i]);
 }
 printf("\n");
}
int main() {

 struct queue q;

 printf("Enter the Size of Array :");
 scanf("%d",&q.size);

 q.Q = (int *)malloc(q.size*sizeof(int));
 q.front = q.rear = -1 ;

 enque_frontend(&q,10);
 enque_frontend(&q,20);
 enque_frontend(&q,30);
 enque_rearend(&q,60);
 enque_rearend(&q,70);

 
 display(&q);
}
