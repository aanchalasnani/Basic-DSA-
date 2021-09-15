#include<iostream>

using namespace std;

int main() {
	
	int d1 , v1 , d2 ,v2 , p;
	
	cin>>d1>>v1>>d2>>v2>>p;
	
	int total=0,val=0,day=0,i , j;
	
	if(d1==d2) {
		day = d1 - 1;
	}
	
	while(total<p && total!=p){
		
		if(d1==d2) {
			
			
			
//			for(i=1;i<d1;i++) {
//				day = i; 
//				total = 0;
//			}
			
			val = v1 + v2;
			total = total + val ;
			day ++;
			
			//cout<<"day : "<<day<<"  total : "<<total<<endl;
			
		}
		else if(d2<d1) {
			
			for(i=1;i<d2;i++) {
				
				total = 0;
				day=i;
			}
			for(i=d2;i<d1;i++) {
				
				val = v2;
				total = total + val;
				day ++;
				d2 ++;
				if(total == p || total > p){
					break;
				}
				
			}
			//day--;
			
		}
		else {
			
			for(i=1;i<d1;i++) {
				
				total = 0;
				day=i;
			}
			
			for(i=d1;i<d2;i++) {
				
				val = v1;
				total = total + val;
				day ++;
				d1 ++;
				if(total == p || total > p){
					break;
				}
			}
			//day--;
		}
		if(total==p) {
			break;
		}
		//cout<<"day : "<<day<<"total : "<<total<<endl;
	}

	cout<<day;
}
