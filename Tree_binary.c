#include<stdio.h>
#include<stdlib.h>

struct node *root = NULL;

struct node //doubly LL
{
	struct node *lchild;
	int data;
	struct node *rchild;
};
typedef struct node node;

struct queue {
	
	int size;
	int front;
	int rear;
	node **Q;
	
};


void enqueue(struct queue *q , node * x) {
	
	if((q->rear+1)%q->size == q->front) {
		printf("\nQueue is full ");
	}
	else {
//		printf("  %d   \t",q->size);
		
		q->rear = (q->rear + 1 )%q->size ;
//		printf("\n  %d   \t",q->rear);
		q->Q[q->rear] = x ;
	}
}

node * dequeue(struct queue *q) {
	
	node * x = NULL;
	
	if(q->rear == q->front) {
		
		printf("\nQueue if empty....\n");
	}
	else {
		q->front = (q->front+1)%q->size;
		x = q->Q[q->front];
	}
	return x;
}


void create(struct queue *q, int size) {	
	q->size = size;
	q->Q = (node **)malloc(q->size*sizeof(node *));
//	printf("size entered : %d\n",q.size);
	q->front = q->rear = 0 ;
}

int isempty(struct queue *q) {
	return q->front == q->rear;
}

void tree () {
	struct node *p,*t;
	int x;
	struct queue q;
	create(&q,100);
	
	printf("\nEnter root value ==> ");
	scanf("%d",&x);
	
	root = (struct node *)malloc(sizeof(struct node));
	root->data = x ;
	root->lchild = root->rchild = NULL;
	
	enqueue(&q,root);
	
	while(!isempty(&q)) {
		p = dequeue(&q);
		printf("\nEnter left child of %d ==> ",p->data);
		scanf("%d",&x);
		if(x!=-1) {
			t = (struct node *)malloc(sizeof(struct node));
			t->data = x ;
			t->lchild = t->rchild=NULL;
			p->lchild = t;
			enqueue(&q,t);			
		}
		printf("\nEnter right child of %d ==> ",p->data);
		scanf("%d",&x);
		if(x!=-1) {
			t = (struct node *)malloc(sizeof(struct node));
			t->data = x ;
			t->lchild = t->rchild=NULL;
			p->rchild = t;
			enqueue(&q,t);			
		}
	}
}

void preorder(struct node *p) {
	

	if(p) {
		printf("%d  ",p->data);
		preorder(p->lchild);
		preorder(p->rchild);
	}
}

void inorder(struct node *p) {
	
	
	if(p) {
		
		inorder(p->lchild);
		printf("%d  ",p->data);
		inorder(p->rchild);
}
}

void postorder(struct node *p) {
	
	
	if(p) {
		
		postorder(p->lchild);
		postorder(p->rchild);
		printf("%d  ",p->data);
}
}

//void iterative_preorder(struct node *t){
//	
//	struct stack st;
//	while(t!=NULL || !isempty(st))
//	{
//		if(t!=NULL) {
//			printf("%d",t->data);
//			push(&st , t);
//			t=t->lchild;
//		}
//		else {
//			t = pop(&st);
//			t = t->rchild;
//		}
//	}
//}

void levelorder(struct node *t) {
	struct queue q;
	create(&q,100);
	printf("%d ",t->data);
	enqueue(&q,t);
	while(!isempty(&q)) {
		t = dequeue(&q);
		if(t->lchild) {
			printf("%d ",t->lchild->data);
			enqueue(&q,t->lchild);
		}
		if(t->rchild) {
			printf("%d ",t->rchild->data);
			enqueue(&q,t->rchild);
		}
	}
}

int height(struct node *p) {
	
	int x,y;
	if(p!=NULL)
	{
		x = height(p->lchild);
		y = height(p->rchild);	
		
		if(x>y)
			return x+1;
		else 
			return y+1;
	}
}

int count(struct node *p) {
	
	int x,y;
	if(p!=NULL)
	{
		x = count(p->lchild);
		y = count(p->rchild);	
		return x+y+1;
}
}


int main() {
	
	tree();
	printf("\n\nDisplaying Preorder Traversal ==> ");
	preorder(root);
	printf("\n\nDisplaying Postorder Traversal ==> ");
	postorder(root);
	printf("\n\nDisplaying Inorder Traversal ==> ");
	inorder(root);
	printf("\n\nDisplaying Level Traversal ==> ");
	levelorder(root);
	printf("\n\nTotal no. ofnodes in our tree : %d ",count(root));
	printf("\n\nheight of tree : %d ",height(root));
	
}
