#include"../inc/cpplib"
using namespace std;

class base1{

	int a;

	public:
	base1(){}
	base1(int x){
		cout<<"constructor-base1"<< endl;
		a = x;
	}
	~base1(){
		cout<<"Destructor-base1"<< endl;
	}

	void print_data(){
		cout<<"a: "<< a <<endl;
	}       
};

class der1:public base1{
	int b;

	public:
	der1(){}
	der1(int x,int y):base1(x){
		cout<<"constructor-der1"<< endl;
		b = y;
	}
	~der1(){
		cout<<"Destructor-der1"<< endl;
	}
	void print_data(){
		base1::print_data();
		cout<<"b: "<< b <<endl;
	}       
};

class base2{
	int c;

	public:
	base2(){}
	base2(int z){
		cout<<"constructor-base2"<< endl;
		c = z;
	}
	~base2(){
		cout<<"Destructor-base2"<< endl;
	}
	void print_data(){ 
		cout<<"c: "<< c <<endl;
	}       
};

class der2:public der1,public base2{
	int d;

	public:
	der2(){}
	der2(int x,int y,int z,int p):der1(x,y),base2(z){
		cout<<"constructor-der2"<< endl;
		d = p;
	}

	~der2(){
		cout<<"Destructor-der2"<< endl;
	}
	void print_data(){
		der1::print_data();
		base2::print_data();
		cout<<"d: "<< d <<endl;
	}       
};

main(){
	der2 obj1(10,20,30,40);

	cout<<"----------------------------------------------------------------------"<< endl;
	obj1.print_data();
	cout<<"----------------------------------------------------------------------"<< endl;
}


