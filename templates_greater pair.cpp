#include<iostream>
using namespace std;

template<class T>
class Pair {
	
	T num1,num2;
	
	public : 
	
	Pair(T x , T y) : num1(x), num2(y) {
		
	}
	
	T get_max(int x , int y) const {
		
		return(num1>num2?num1:num2);
	}
};

int main() {
	
	Pair <int> p1(10,20) ;
	
	cout<<"greater number is : "<<p1.get_max(10,20);
	
}
