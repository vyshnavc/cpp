/* expression - b= +a */
#include"cpplib"
using namespace std;
class A
{
   int x;
        public:
             A(){}
             A(int a):x(a){}
             A operator -()
             {
                   A temp; 
                   temp.x= -x;
                   return temp;
             }
             
             A operator +()
             {
                   A temp; 
                   temp.x= +x;
                   return temp;
             }
            void print_data()
            {
                  cout<<"x: "<< x << endl;
            }
};

main()
{
   A a(-10),b,c;
   b= +a;
   c= -a;
   a.print_data();
   b.print_data();
   c.print_data();
}
