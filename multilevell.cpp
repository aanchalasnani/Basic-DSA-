#include<iostream>
using namespace std;

class A {
	int a;
	public :
		void setvalue() {
			a=10;
			cout<<"A setval ";
		}
		A() {
			cout<<"A: ";
		}
		
};
class B : public A {
	int b;
	public : 
	void setvalue() {
		b=20;
		cout<<"B setval ";
	}
	B() {
		cout<<"B: ";
	}
};
class C : public B {
	int c;
	public :
		void setvalue() {
			c=30;
			cout<<"C setval "<<c;
		}
		C() {
			cout<<"C : ";
		}
};

int main() {
	
	C c;
	c.setvalue();
	
}
