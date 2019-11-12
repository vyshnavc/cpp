/* C++ program to implement multilevel inheritance.*/

#include <iostream>
using namespace std;
 
//Base Class : class A
class A
{
    private:
        int a;
    public:
        void get_a(int val_a)
        {
            a=val_a;
        }
         
        void disp_a(void)
        {
            cout << "Value of a: " << a << endl;
        }
};
 
//Here Class B is base class for class C
//and Derived class for class A
class B: public A
{
    private:
        int b;
    public:
        void get_b(int val_a, int val_b)
        {
            get_a(val_a);   
            b=val_b;
        }
         
        void disp_b(void)
        {
            //display value of a
            disp_a();
            cout << "Value of b: " << b << endl;
        }
};
 
//Here class C is derived class of B and B is Base class of CC
class C: public B
{
    private:
        int c;
    public:
        void get_c(int val_a, int val_b,int val_c)
        {
            /*** Multilevel Inheritance ***/
            get_b(val_a,val_b); 
            c=val_c;
        }
         
        void disp_c(void)
        {
            disp_b();
            cout << "Value of c: " << c << endl;
        }
};
 
int main()
{
    //create object of final class, that is C
    C objC;
     
    objC.get_c(10,20,30);
    objC.disp_c();
     
    return 0;
}

