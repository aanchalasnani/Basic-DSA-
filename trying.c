#include<stdio.h>

void modulo(int x,int y) {
	unsigned z;
	unsigned w;
	
	w = x-y;
	z=y-x;
	
	printf("x-y = %d \n y-x = %d",w,z);
	
}

int main()
{
	modulo(3,4);
}
