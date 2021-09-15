#include<iostream>

using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--) {
		
		int n,d,i,j,rday=0,nrday=0,visited=0,risk=0,nr=0;
		cin>>n>>d;
		int a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<n;i++) {
		    
		    if(a[i]>=80||a[i]<=9) {
		        risk ++ ;
		    }
		    else {
		        nr++;
		    }
		}
		for(i=0;i<n;i++) {
		    if(risk%d == 0) {
		        rday = risk/d;
		    }
		    else {
		         rday = risk/d  ;
		         rday = rday + 1;
		    }
		    if(nr  % d == 0) {
		        nrday = nr/d ;
		        
		    }
		    else {
		        nrday = nr/d;
		        nrday = nrday + 1;
		    }
		}
// 		if(n%2==0) {
// 			day = n/d;
// 		}
// 		else {
// 			day = n/d;
// 			day = day + 1 ;
// 		}
		//cout<<"risk : "<<risk<<" non risk "<<nr<<" risk day : "<<rday<< " non risk day : "<<nrday<<endl;
		cout<<rday + nrday<<endl;
		
	}
}
