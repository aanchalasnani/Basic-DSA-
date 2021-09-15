#include <bits/stdc++.h> 
using namespace std; 




void SieveOfEratosthenes(int a[] , int n) 
{ 
    
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
       
        if (prime[p] == true) 
        { 
          
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  	int i=0;
    
    for (int p=2; p<=n; p++) {
	
       if (prime[p])
	   {
	   	 a[i]=p;
	   	 
	   	 i++;
		} 
         
	}
} 

int main ()
{
int n=100000;
int a[n];
//store(a);
SieveOfEratosthenes(a,n);
int t;
cin>>t;
while(t--) {
	
	int n; cin>>n;
	int i,index;
	int b[n],c[n];
	for(i=0;i<n;i++) {
		cin>>b[i];
	}
	for(i=0;i<n;i++) {
		c[i]=a[i];
	}
	
	i=0;
	
	for(index = 1; index<=n ; index++) {
		
		if(b[i]==index) {
			c[i] = index ;
		}
		else if(b[i]!=index) {
			//cout<<"b[i] = "<<b[i]<<endl;
			c[i] = a[b[i]-1];
		}
		else{
		    c[i] = a[i];
		}
		i++;
	}
	int j;
	for(i = 0 ; i < n ;i++) {
	//	cout<<c[i]<<" ";
	int index = 0;
	for(j=1 ; j<n-1 ; j++) {
	
	 if(c[i] == i+1) {
	 	break;
	 }
	 else if(c[i]==c[j]) {
		//cout<<"\nc[i] = "<<c[i]<<"c[j]"<<c[j]<<endl;
		if(c[j]==a[j+n]) {
			j++;	
		}
		c[j] =a[j+n];
		//count++;
		//index = index + n;
	}
	}
}

	for(i=0; i<n ;i++) {
		cout<<c[i]<<" ";
	}
	cout<<endl;
	
	
}
 
return 0;
}
