#include<stdio.h>
#include<stdlib.h>

void quicksort(int list[], int low, int high)
{
    int pivot, i, j, temp;
    if (low < high)
    {
        pivot = low;
        i = low;
        j = high;
        while (i < j) 
        {
            while (list[i] <= list[pivot] && i <= high)
            {
                i++;
            }
            while (list[j] > list[pivot] && j >= low)
            {
                j--;
            }
            if (i < j)
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
        temp = list[j];
        list[j] = list[pivot];
        list[pivot] = temp;
        quicksort(list, low, j - 1);
        quicksort(list, j + 1, high);
    }
}

void insertion_sort(int a[] , int n)
{
	int i , j , key ;
	
	for(i = 1 ; i< n ; i++) {
		
		j = i-1;
		key = a[i];
		
		while(key<a[j] && j>=0) {
			
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
//		if(i==2){
//			break;
//		}
	}
	printf("\n\nDisplaying Insertion Sort :  \n");
	for(i=0;i<n;i++) {
		printf("%d\t",a[i]);
	}
}

void selection_sort (int a[] , int n)
{
	
	int i,j,k,temp;
	for(i=0 ; i<n-1 ; i++) {
		
		for(j=k=i ; j<n; j++){
			
//			if(i==1){
//				break;
//			}
			if (a[j]<a[k]) {
				k = j;
			}
			
		}
			temp = a[i];
			a[i] = a[k];
			a[k] = temp;
		
	}
	
	printf("\n\nSelection Sort :\n");
	for(i = 0 ; i<n ; i++) {
		printf("%d\t",a[i]);
	}
}

void bubble_sort(int a[] , int n) {
	
	int i , j,temp;
	for(i=0;i<n-1;i++) {
		
		for(j = 0 ; j<n-1-i ; j++)
		{
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("\n\nBubble Sort :\n");
	for(i=0;i<n;i++) {
		printf("%d\t",a[i]);
	}
}



int maxx(int a[] , int n) {
//	int max = INT32_MIN;
	int max= -32678;
	int i ;
	for(i = 0 ; i<n ; i++) {
		if(a[i]>max) {
			max = a[i];
		}
	}
	return max;
}


void merge_sort(int d[] , int n , int e[] , int m) {
	
	int c[m+n];
	int i , j , k ;
	i=j=k=0;
	while(i<n&&j<m) {
		if(d[i]<e[j]) 
			c[k++] = d[i++];
		else 
			c[k++] = e[j++];
	}
	for(;i<n;i++) {
		c[k++] = d[i];
	}
	for(;j<m;j++) {
		c[k++] = e[j];
	}
	printf("\n\nDisplaying merge sort :\n");
	for(i=0;i<m+n;i++) {
		printf("%d ",c[i]);
	}
	
}

void merge_within(int a[], int l , int mid ,int  h) {
	
//	int l , mid , h ;
//	l = 0 ; h = 7 ; mid = 3;
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
//	printf("\n\nDisplaying Merge within : \n");
//	for(i = 0 ; i<h+1 ; i++) {
//		printf("%d ",b[i]);
//	}
}

void iterative_merge_sort(int B[] , int n) {
	
	int p , i , l , mid , h;
	
	for(p=2 ; p<=n ; p=p*2) {
		for( i = 0 ; i+p-1<=n ;i=i+p)  {
			
			l = i ;
			h = i+p-1;
			mid = (l+h)/2;
			merge_within(B,l,mid,h);
		}
	}
	if(p/2<n) {
		merge_within(B,0,p/2-1,n-1);
	}
	printf("\n\nDisplaying Iterative Merge Sort :  ");
	for(i = 0 ; i<n ; i++) {
		printf("%d ",B[i]);
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

void count_sort(int a[] , int n) {
	int i,j,max,*c;
	max = maxx(a,n);
	c = (int *)malloc(sizeof(int)*(max+1));
	for(i=0;i<max+1;i++) {
		c[i] = 0;
	}
	for(i = 0 ; i<n ; i++) {
		c[a[i]]++;
	}
	i=0;j=0;
	while(j<max+1) {
		if(c[j]>0){
			a[i++]=j;
			c[j]--;
		}
		else {
			j++;
		}
	}
	printf("\n\nCount Sort :\n");
	for(i=0;i<n;i++) {
		printf("%d\t",a[i]);
	}
}



int main()
{
	int a[] = { 2,7,5,4,9,1,8,3,6};
	int n = 9;
	float b[] = {1.3,2.2,4.1,8.5,7.4,5.5,6.6,9.4,0.5,4.5};
	int d[] ={1,3,5,7,9,11,13};
	int z = 7;
	int e[] = {2,4,6,8,10,12,14,16,18,20};
	int m = 10;
	
	int A[] = {2,5,8,12,3,6,7,10};
	int B[]={8,3,7,4,9,2,6,5}; int sizeofB = 8;

	//fbubble_sort(b,m);
	//bubble_sort(a,n);
	insertion_sort(a , n);
	//selection_sort(a,n);
//	count_sort(a,n);
//	merge_sort(d,z,e,m);
//	merge_within(A,0,3,7);
//	iterative_merge_sort(B,sizeofB);
//	recursive_merge_sort(B,0,7);
//	quicksort(A,0,7);
//	printf("\n\nRecursive Merge SOrt : \n");
//	int i;
//	for(i = 0 ; i<8 ; i++) {
//		printf("%d\t",B[i]);
//	}
//	printf("\n\nQuick SOrt : \n");
//	for(i = 0 ; i<8 ; i++) {
//		printf("%d\t",B[i]);
//	}
	return 0;
}
