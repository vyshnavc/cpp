#include<iostream>
using namespace std;

class A{

	int a[5];

	public:
	A(){}
	int & operator [](int i){return a[i];}
};

main(){
	A obj;  

	cout<<"Enter data: ";
	for(int i=0;i<5;i++)
		cin >> obj[i];
	cout <<"Entered data: ";
	for(int i=0;i<5;i++)
		cout << obj[i] <<" ";
	cout<< endl << endl <<"-----Operator overloaded------"<< endl << endl;
}
