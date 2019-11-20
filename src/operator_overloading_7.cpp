/*write a program to implement expression (++v + v++ + v-- + --v) */
#include"cpplib"
using namespace std;

class A{

	int a;

	public:
	A(){
	}
	A(int x):a(x){
	}
	A operator ++(){
		A k;

		k.a = ++a;
		return k;
	}
	A operator ++(int){
		A k;

		k.a = a++;
		return k;
	}
	A operator --(){
		A k;

		k.a = --a;
		return k;
	}
	A operator --(int){
		A k;

		k.a = a--;
		return k;
	}
	A operator +(const A &temp){
		A k;

		k.a = a+temp.a;
		return k;
	}
	void print(){
		cout<<"a = "<< a <<endl;
	}
};

int main(){
	A v(1),c;

	c = ++v + v++ + v-- + --v;
	c.print();
	v.print();
}
