/* expression - ++a + b++ - ++c + d - ++e*/

#include"cpplib"
using namespace std;

class A{

	int x;

	public:
	A(){}
	A(int a):x(a){}
	// for pre-increment
	A operator ++() {
		A t;

		t.x = ++x;
		return t;
	}
	// for post-increment
	A operator ++(int)  {
		//  A t;
		// t.x= x+1;
		return x++;
	}
	// for addition
	A operator +(const A &t){
		A temp;
		temp.x = x + t.x;
		return temp;
	}
	// for subtraction
	A operator -(const A &t){
		A temp;
		temp.x = x - t.x;
		return temp;
	}

	void print_data(){
		cout<<"output: "<< x << endl;
	}

};

main(){
	A a(1),b(2),c(3),d(1),e(4),out;

	out = ++a + b++ - ++c + d - ++e;
	out.print_data();
}


