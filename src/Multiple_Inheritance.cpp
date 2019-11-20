#include "../inc/cpplib"
using namespace std;

class A{
	int a;

	public:
	A(){}
	~A(){cout<<"Destructor-A..."<< endl;}
	A(int x){
		cout<<"constructor-A..."<< endl;
		a=x;
	}
	void print_data(){
		cout<<"a: "<< a << endl;
	}
};

class B{
	int b;

	public:
	B(){}
	~B(){cout<<"Destructor-B..."<< endl;}
	B(int y){
		cout<<"constructor-B..."<< endl;
		b=y;
	}
	void print_data(){
		cout<<"b: "<< b << endl;
	}
};

class C{
	public:
		int c;

		C(){}
		~C(){cout<<"Destructor-C..."<< endl;}
		C(int z){
			cout<<"constructor-C..."<< endl;
			c = z;
		}
		void print_data(){
			cout<<"c: "<< c << endl;
		}
};

class D:public A,public B,public C{
	int d;

	public:
	D(){}
	~D(){cout<<"Destructor-D..."<< endl;}
	D(int x,int y,int z,int p):A(x),B(y),C(z){
		cout<<"constructor-D..."<< endl;
		d = p;
	}
	void print_data()
	{
		A::print_data();
		B::print_data();
		C::print_data();
		cout<<"d: "<< d << endl;
	}
};

main(){
	D obj1(10,20,30,40);

	obj1.print_data();
	cout<<"--------------------------------------------------------"<< endl;
}
