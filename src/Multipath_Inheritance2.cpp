#include"../inc/cpplib"
using namespace std;

class A{
	public:
		int x;

		A(){
			x = 10;
			cout<<"constructor-A..."<< endl;
		}

		~A(){
			cout<<"Destructor-A..."<< endl;
		}
};

class B:virtual public A{
	public:
		int y;
		B(){
			y = 20;
			cout<<"constructor-B..."<< endl;
		}

		~B(){
			cout<<"Destructor-B..."<< endl;
		}
};

class C:virtual public A{
	public:
		int z;
		C(){
			z = 30;
			cout<<"constructor-C..."<< endl;
		}

		~C(){
			cout<<"Destructor-C..."<< endl;
		}
};

class D:public B,public C{
	public:
		int p;
		D(){
			p = 40;
			cout<<"constructor-D..."<< endl;
		}

		~D(){
			cout<<"Destructor-D..."<< endl;
		}

		void print_data(){
			cout<<"x: "<< x << endl;
			cout<<"y: "<< y << endl;
			cout<<"z: "<< z << endl;
			cout<<"p: "<< p << endl;
			cout<<"size of A: "<< sizeof(A) << endl;
			cout<<"size of B: "<< sizeof(B) << endl;
			cout<<"size of C: "<< sizeof(C) << endl;
			cout<<"size of D: "<< sizeof(D) << endl;
		}
};

main(){
	D a;
	a.print_data();
}
















