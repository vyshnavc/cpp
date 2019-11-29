#include"../inc/cpplib"
using namespace std;

void test2(){
	cout<<"In test2..."<< endl;
	throw "User";
}

void test1(){
	cout<<"In test1..."<< endl;
	try{
		test2();
	}

	catch(const char *s){
		cout<<"Costumor..."<< endl;
		throw s;
	}
}

main(){
	try{
		test1();
	}
	catch(const char *s){
		cout<<"Higher..."<< endl;
		cout<< s << endl;
	}
}
