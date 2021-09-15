#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

struct node
{
    int data;
    struct node *next;
};
typedef struct node node;

node *top;

void initialize()
{
    top = NULL;
}

void push(int value)
{
    node *tmp;
    tmp = malloc(sizeof(node));
    tmp -> data = value;
    tmp -> next = top;
    top = tmp;
}

int pop()
{
    node *tmp;
    int n;
    tmp = top;
    n = tmp->data;
    top = top->next;
    free(tmp);
    return n;
}

int Top()
{
    return top->data;
}

int isempty()
{
    return top==NULL;
}

void display(node *head)
{
    while(head!=NULL)
	{
		printf("     %d    ",head->data);
		head=head->next;
	}
    
//	if(head == NULL)
//    {
//        printf("NULL\n");
//    }
//    else
//    {
//        printf("%d\n", head -> data);
//        display(head->next);
//    }
}

int main()
{
	int n,item,i;
    initialize();
    printf("\nhow many time u want to push === >  \t");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
    	printf("\nenter the value to push === > \t");
    	scanf("%d",&item);
    	push(item);
	}
    
    printf("The top is %d\n",Top());
    pop();
    printf("The top after pop is %d\n",Top());
    display(top);
    return 0;
}

