#include<stdio.h>

int main() {
	
	int i=0;
	int a=0,b;
	for(i=10;i>=1;i/2){
		a++;
		continue;
	}
	printf("%d",a);
	return 0;
}
