/*assigment operator program*/

#include<iostream>
using namespace std;

class A{

	int x,y;

	public:
	A(){}
	A(int a,int b):x(a),y(b){}
	A operator =(A temp) {
		x = temp.x;   
		y = temp.y;   
		cout<< endl <<"---Operator overloaded-----"<< endl;
	}

	void print_data(){
		cout <<"x: "<< x <<"  "<<"y: "<< y << endl;
	}
};

main(){
	A a(10,20),b;

	b = a;
	a.print_data();
	b.print_data();
}
