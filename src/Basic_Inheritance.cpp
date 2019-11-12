#include <iostream>  
using namespace std;  

class Account {  
	public:  
		float salary;   
                Account(int a):salary(a)
                {}
};  
class Programmer:public Account 
{  
	public:  
        	float bonus;    
                Programmer(int a,int b):Account(a)
                {
                 bonus=b;
                }
};       
int main(void) {  
	Programmer p1(10000,2000);  
	cout<<"Salary: "<<p1.salary<<endl;    
	cout<<"Bonus: "<<p1.bonus<<endl;    
}  
