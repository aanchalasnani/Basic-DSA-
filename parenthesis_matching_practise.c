#include<stdlib.h>
#include<stdio.h>

struct node{
	
	char data;
	struct node *next;

}*top = NULL;

void push(char x) {
	
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	
	if(temp == NULL) {
		
		printf("\nStack Overflow\n");
	}
	else {
		
		temp->data = x;
		temp->next = top;
		top = temp;
	}
	
}

char pop() {
	
	struct node *temp;
	char x = -1;
	if(top == NULL ){
		
		printf("\nStack Underflow\n");
	}
	else {
		temp = top;
		x = temp->data ;
		top = top->next;
		free(temp);
	}
	return  x;
}

void display(struct node *traverse) {
	
	while(traverse!=NULL){
		
		printf("%d   ",traverse->data);
		traverse = traverse->next;
		
	}
}

int parenthesis_matching(char *exp) {
	
	int i;
	for(i=0;exp[i]!='\0';i++){
		
		if(exp[i]=='(') {
			push(exp[i]);
		}
		else if(exp[i] == ')') {
			
			if(top == NULL) {
				
				printf("\nPARENTHESIS NOT MATCHED\n");
				return 0;
			}
		    pop();		
		}
	}
	if(top == NULL) {
		printf("\nPARENTHESIS MATCHED \n");
		return 0;
	}
	else{
		printf("\nPARENTHESIS NOT MATCHED \n");
		return 0;
	}
}

int main() {
	
	
	char *exp = "((a+b)*(c+d))";

	parenthesis_matching(exp);
}
