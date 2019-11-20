/*function call operator*/

#include"cpplib"
using namespace std;

class A{

	int x,y;

	public:
	A(){}
	void operator ()(int a,int b){x=a,y=b;}
	void print_data(){
		cout<<"x: "<< x <<"  "<<"y: "<< y << endl;
	}
};

main(){
	A obj1;
	obj1(10,20);
	obj1.print_data();
}

