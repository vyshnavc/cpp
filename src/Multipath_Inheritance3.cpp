#include<iostream>
using namespace std;

class A
{
         int x;
    public:
         A()
         {
            cout<<"def constructor-A..."<< endl;
         }
         A(int a)
         {
             x=a;
             cout<<"constructor-A..."<< endl;
         }
 
         ~A()
          {
             cout<<"Destructor-A..."<< endl;
          }
       void print_data()
       {
           cout<<"x: "<< x << endl;
       }
};

class B:virtual public A
{
        int y;
   public:
        B(){}
        B(int a,int b):A(a)
        {
           y=b;
           cout<<"constructor-B..."<< endl;
        }
 
        ~B()
         {
           cout<<"Destructor-B..."<< endl;
         }
       void print_data()
       {
           A::print_data();
           cout<<"y: "<< y << endl;
       }
};

class C:virtual public A
{
        int z;
   public:
        C(){}
        C(int a,int b):A(a)
        {
          z=b;
          cout<<"constructor-C..."<< endl;
        }
 
        ~C()
        {
            cout<<"Destructor-C..."<< endl;
         }
       void print_data()
       {
           A::print_data();
           cout<<"z: "<< z << endl;
       }
};

class D:public B,public C
{
        int p;
   public:
        D(){}
        D(int a,int b,int c):A(a),B(a,b),C(a,b)
        {
          p=c;
          cout<<"constructor-D..."<< endl;
        }

        ~D()
         {
           cout<<"Destructor-D..."<< endl;
         }

        void print_data()
        {
            B::print_data();
            C::print_data();
            cout<<"p: "<< p << endl;
        }
};

main()
{
   D a(10,20,30);
   a.print_data();
}
















