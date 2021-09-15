#include<stdio.h>
#include<stdlib.h>






void merge_within(int a[], int l , int mid ,int  h) {
	
	int b[100];
	int i , j , k ;
	i = l ; j = mid + 1; k = l ;
	while(i<=mid && j <= h) {
		
		if(a[i]<a[j]) {
			b[k++] = a[i++];
		}
		else {
			b[k++] = a[j++];
		}
	}
	for(;i<=mid;i++) {
		b[k++] = a[i];
	}
	for(;j<=h;j++) {
		b[k++] = a[j];
	}
	for(i = l ; i <= h ; i++) {
		a[i] = b[i];
	}

}



void recursive_merge_sort(int A[], int l , int h) {
	int mid;
	if(l<h) {
		mid = (l+h)/2;
		recursive_merge_sort(A,l,mid);
		recursive_merge_sort(A,mid+1,h);
		merge_within(A,l,mid,h);
		
	}
	
}



int main()
{
	
	int B[]={8,3,7,4,9,2,6,5}; int sizeofB = 8;

	recursive_merge_sort(B,0,7);
	
	printf("\n\nRecursive Merge SOrt : \n");
	int i;
	for(i = 0 ; i<8 ; i++) {
		printf("%d\t",B[i]);
	}
	return 0;
}
