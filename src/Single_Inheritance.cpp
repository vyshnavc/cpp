#include <iostream>  
using namespace std;  
class A  
{  
	int a ;  
	int b ;  
	public:
	A(int x,int y)
	{
		a=x;
		b=y;
	}  
	int mul()  
	{  
		int c = a*b;  
		return c;  
	}     
        ~A()
        {
        }
};  

class B : public A 
{  
	public: 
        B(int x,int y):A(x,y)
        {} 
		int display()  
		{  
			int result = mul();  
			cout <<"Multiplication of a and b is : "<<result<<endl;  
		}  
        ~B()
         {}
};  
int main()  
{     
        B c(4,3);
//	B b;  
	c.display();  

} 
