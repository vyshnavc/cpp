#include"../inc/cpplib"
using namespace std;

main(){
	try{
		throw 'a';
	}

	catch(int x){
		cout<<"In catch..."<< endl;
	}

	catch(const char *s){
		cout<<"char* type..."<<endl;
	}

	catch(double d){
		cout<<"Double..."<< endl;
	}
	catch(...){
		cout<<"Default..."<< endl;
	}

}
