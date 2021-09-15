#include<iostream>
using namespace std;

int main( )
{   
    int t; cin>>t;
    while(t--) {
    string S;
	
    cin>>S;
    string A;
    string B;
    

    int l = 0; 
    
    A = S.substr();
    cout<<A;
    B = S.substr();
    
   
    for(l = 0; A[l] != '\0'; l++);

    int i, j;
    
    for(i = 0, j = 0; A[i] != '\0' && B[j] != '\0'; i++)
    {
        if(A[i] == B[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if(j == l)
        cout<<"YES";
    else
        cout<<"NO";
    }
    return 0;
}
