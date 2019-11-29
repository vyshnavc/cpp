#include"../inc/cpplib"
using namespace std;

class A{
	
        int x;

	public:
	A(){
		cout<<"constructor..."<< endl;
		 throw "success";
	}

	~A(){
		cout<<"Distructor..."<< endl;
	}
};

main(){
	try{
		A obj;
		cout<<"Success...."<< endl;
	}

	catch(const char *s){
		cout<<"In catch: "<< s << endl;
	}
}
