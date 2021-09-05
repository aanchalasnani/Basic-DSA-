#include<stdio.h>
#include<stdlib.h>


struct node {
	
	char data;
	struct node *next;
}*top = NULL;

void push(char x) {
	
	struct node *t;
	t = (struct node *)malloc (sizeof(struct node));
	
	
	if(t==NULL) {
		printf("Stack Overflow\n");
	}
	else {
	t->data = x;
	t->next = top;
	top = t ;
	}
}

char pop() {
	
	struct node *t;
	char x = -1;
	
	if(top == NULL) {
		printf("Stack undeflow");
	}
	else {
		
		t = top ;
		top = top->next;
		x= t->data;
		free(t);
	}
	return x;
	
}

void display(struct node *p) {
	
	while(p!=NULL) {
		
		printf("%d   ",p->data);
		p = p->next;
	}
	printf("\n");
}

int parenthesis(char *exp ){
	
	int i;
//	for(i=0;exp[i]!='\0';i++)
// {
// if(exp[i]=='(')
// push(exp[i]);
// else if(exp[i]==')')
// {
// if(top==NULL)
// return 0;
// pop();
// }
// }
// if(top==NULL)
// return 1;
// else
// return 0;
	for(i=0;exp[i]!='\0';i++){
		
		if(exp[i] == '(')
		{
			push(exp[i]);
		}
			
		else if(exp[i] == ')') {
				
			if(top == NULL) {
//					printf("stack empty");
				printf("False");
				return 0;
					
				
			}
			pop();
		}
	}
	if(top == NULL) {
		
		printf("True");
		return 1;
	}
	else {
		printf("False");
		return 0;
	}
	
}



int main() {
	
	char *exp = "((a+b)*(c-d)))";
	
	printf("%d",parenthesis(exp));
	
}
