#include<iostream>
using namespace std;
class A
{
   int x,y;
         public:
                A(){}
                A(int a,int b):x(a),y(b){}
                A operator ++()
                {
                    x=x+1,y=y+1;
                    return *this;
                }
     
                A operator ++(int)
                {
                   A temp;
                   temp.x= x;
                   temp.y= y;
                   x=x+1,y=y+1;
                   return temp;
                }
               void print_data()
               {
                     cout<<"x: "<< x <<"  "<<"y: "<< y << endl;
               }
};

main()
{
     A obj1(10,20),obj2;
     obj2= ++obj1;
     cout<<"---------obj1---------"<< endl;
     obj1.print_data();
     cout<<"---------obj2---------"<< endl;
     obj2.print_data();
}
