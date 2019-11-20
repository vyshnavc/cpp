/*insertion and extraction operator program*/

#include<iostream>
using namespace std;

class A{

	public:
		int x,y;

		friend istream& operator >>(istream& in,A &);
		friend ostream& operator >>(ostream& out,A &);

};

istream& operator >>(istream &in,A &t){
	cout<<"Enter x & y: ";
	in >> t.x >> t.y;
	return in;
}

ostream& operator <<(ostream& out,A&t){
	cout<<"Class Data: ";
	out << endl <<"x: "<< t.x <<"  "<<"y: "<< t.y << endl;
	cout<<".......Operator overloaded Successfully......"<< endl << endl;
}

main(){
	A obj1;

	cin >> obj1;
	cout << obj1;
}

