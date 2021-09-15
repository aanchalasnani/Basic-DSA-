#include<stdio.h>

void linear_search(int a[] , int n,int search) {
	int i;
	int count=0;
	for(i = 0 ; i< n ;i ++) {
		if(a[i] == search ) {
			printf("\nElement %d present on %d index\n",search,i);
			printf("\nloops run for %d times",count);
			return ;
		}
		count++;
	}
}

int binary_search(int b[] , int n, int search) {
	
	int first , last , mid ;
	first =  0 ; last = n-1; 
	
	while(first<=last) {
		mid = (first + last)/2;
		if(b[search] == mid) {
			return mid;
		}
		else if(search > b[mid]) {
			first = mid+1;
		}
		else {
			last = mid-1;
		}
	
	}
	
}

int main() {
	
	int a[] = {0,3,4,9,7,6,2};
	int b[] = {11,22,34,51,57,76,81};
	int n = 7;
	int search;
	printf("enter the vaue to be search ==> ");
	scanf("%d",&search);
//	linear_search(a,n,search);
	
	printf("\nElement present on index %d",binary_search(b,n,search));
	
}
