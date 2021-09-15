#include <iostream>  
     using namespace std;  
     template<class T1, class T2>  
    class A   
    {  
         T1 a;  
         T2 b;  
         public:  
        A(T1 x,T2 y)  
       {  
           a = x;  
           b = y;  
        }  
           void display()  
          {  
                 std::cout << "Values of a and b are : " << a<<" ,"<<b<<std::endl;  
           }  
      };  
      
      template<class T>
	   T add(T &a,T &b)  
{  
    T result = a+b;  
    return result;  
      
}  
  
      int main()  
     {  
     		int a  = 10 ,b= 20;
           A<int,float> d(5,6.5);  
           d.display();  
           cout<<"\naddition : "<<add(a,b);
           return 0;  
     }  
