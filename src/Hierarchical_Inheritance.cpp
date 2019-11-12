#include "../inc/cpplib"
using namespace std;
class base
{
    int a;
	public:
	base(){}
	base(int x)
	{
		cout<<"constructor-base..."<< endl;
		a=x;
	}

	~base()
	{
		cout<<"Destructor-base..."<< endl;  
	}
      
        void print_data()
        {
               cout<<"a: "<< a << endl;
        }
};

class der1:public base
{
    int b;
        public:
        der1(){}
        der1(int x,int y):base(x)
        {
              cout<<"constructor-der1..."<< endl;
              b=y;
        }
 
        ~der1()
         {
              cout<<"Destructor-der1..."<< endl;
         }
        void print_data()
        {
               base::print_data();
               cout<<"b: "<< b << endl;
        }
};

class der2:public base
{
    int c;
        public:
        der2(){}
        der2(int x,int y):base(x)
        {
             cout<<"constructor-der2..."<< endl;
             c=y;
        }     
     
        ~der2()
         { 
             cout<<"Destructor-der2..."<< endl;
         }
        void print_data()
        {
               base::print_data();
               cout<<"c: "<< c << endl;
        }
};

class der3:public base
{
    int d;
        public:
        der3(){} 
        der3(int x,int y):base(x)
        {
             cout<<"constructor-der3..."<< endl;
             d=y;
        }
   
        ~der3()
         {
             cout<<"Destructor-der3..."<< endl;
         }
        void print_data()
        {
               base::print_data();
               cout<<"d: "<< d << endl;
        }
};

main()
{
    der1 a(10,20);
    der2 b(30,40);
    der3 c(50,60);
    cout<<"----------------------------------------------------"<< endl;
    a.print_data();
    cout<<"--------------------------"<< endl;
    b.print_data();
    cout<<"--------------------------"<< endl;
    c.print_data();
    cout<<"----------------------------------------------------"<< endl;
}







