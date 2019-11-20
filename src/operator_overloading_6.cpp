/*post and pre  increment and decrement operator*/

#include"cpplib"
using namespace std;

class A{
	int a,b;

	public:
	A(){
	}
	A(int x,int y):a(x),b(y){
	}
	A operator ++(){
		A k;

		k.a = ++a;
		k.b = ++b;
		return k;
	}
	A operator ++(int){
		A k;

		k.a = a++;
		k.b = b++;
		return k;
	}
	A operator --(){
		A k;

		k.a = --a;
		k.b = --b;
		return k;
	}
	A operator --(int){
		A k;

		k.a = a--;
		k.b = b--;
		return k;
	}
	void print(){
		cout<<"a = "<< a <<" "<<"b = "<< b <<endl;
	}
};

int main(){
	A v(1,1),c;

	cout<<"preincrement"<<endl;
	c = ++v;
	c.print();
	v.print();
	cout<<"predecrement"<<endl;
	c = --v;
	c.print();
	v.print();
	cout<<"postincrement"<<endl;
	c = v++;
	c.print();
	v.print();
	cout<<"postdecrement"<<endl;
	c = v--;
	c.print();
	v.print();
}
