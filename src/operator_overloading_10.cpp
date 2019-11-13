/*expression -  out= a++ + ++b - c++ + d - ++e*/
#include"cpplib"
using namespace std;
class A
{
   int x,y;
       public:
           A(){}
           A(int a,int b):x(a),y(b){}
     // for pre-increment
           A operator ++() 
           {
               A t;
               t.x= ++x;
               t.y= ++y;
               return t;
           }
     //for pre-decrement
           A operator --() 
           {
               A t;
               t.x= --x;
               t.y= --y;
               return t;
           }
     // for post-increment
           A operator ++(int)  
           {
               A t;
                 t.x= x++;
                 t.y= y++;
               return t;
           }
     //for post-decrement
           A operator --(int)  
           {
               A t;
                 t.x= x--;
                 t.y= y--;
               return t;
           }
     // for addition
           A operator +(const A &t)
           {
              A temp;
              temp.x= x + t.x;
              temp.y= y + t.y;
              return temp;
           }
     // for subtraction
          A operator -(const A &t)
           {
              A temp;
              temp.x= x - t.x;
              temp.y= y - t.y;
              return temp;
           }
  
       void print_data()
        {
            cout<<"x: "<< x <<"  "<<"y: "<< y << endl;
        }
         
};

int main()
{
    A a(1,1),b(2,2),c(3,3),d(1,1),e(4,4),out;
    out= a++ + ++b - c++ + d - ++e;
    out.print_data();
    b.print_data();
}
