#include<stdio.h>

void update(int *a  , int * b) {
	
	if (a>b) {
		int a1 = *a + *b;
		int b1=*a-*b;
		printf("%d , %d",a1,b1);
	}
	else {
		int a1 = *a + *b;
		int b1 = *b - *a;
		printf("%d , %d",a1,b1);
	}
}

int main() {
	
	int a , b;
	int *pa = &a;
	int *pb = &b;
	scanf("%d%d",&a,&b);
	update(&a , &b);
}
