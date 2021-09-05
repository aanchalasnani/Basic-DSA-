#include<iostream>
using namespace std;
class Test1 {int y;};  
class Test2 {
    int x;
    Test1 t1;
public:
    operator Test1() { return t1; }
    operator int() { return x; }
};
  
void fun ( int x)  { };
void fun ( Test1 t ) { };
  
int main() {
    Test2 t;
    fun(t);
    return 0;
}
