/*increment operator post and pre*/
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
         A operator ++() /*pre increment */
         {
             A k;
             k.x= ++x;
             k.y= ++y;
             return k;
         }
        
         A operator ++(int) /*post increment */
         {
             A k;
             k.x= x++; /*value of x is copied into k.x then x incremented*/
             k.y= y++;
             return k;
         }
};

main()	
{
   A a(100,200),b(100,200),c,d;
   c= a++;
   cout<<"postincrement"<<endl;
   c.print_data();
   a.print_data();
   cout<<"preincrement"<<endl;
   d= ++b;
   d.print_data();
   b.print_data();
}
