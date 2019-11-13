/*write a program to execute below expression  obj5= 100 + obj1 + obj2 + obj3 + obj4 */
#include"cpplib"
using namespace std;

class A
{
  int x,y;
       public:
            A(){}
            A(int a,int b):x(a),y(b){}
           
            void print_data()
            {
                 cout<<"x: "<< x <<"   "<<"y: "<< y << endl;
            }
     friend A operator +(int, A&);
     friend A operator +(const A&, const A&);
};

A operator +( int a, A &t)
{
    A temp;
    temp.x= t.x + a;
    temp.y= t.y + a;
    return temp;
}

A operator +(const A &t1, const A &t2)
{
    A temp;
    temp.x= t1.x + t2.x;
    temp.y= t1.y + t2.y;
    return temp;
}

main()
{
    A obj1(10,20),obj2(1,1),obj3(2,2),obj4(3,3),obj5;
    obj5= 100 + obj1 + obj2 + obj3 + obj4;
    obj5.print_data();
}
