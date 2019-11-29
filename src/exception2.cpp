#include"../inc/cpplib"
using namespace std;
float division(float,float);

main(){
	float x,y,ret;
	cout<<"Enter x: ";
	cin >> x;
vyshnav:cout<<"Enter y: ";

	cin >> y;

	try{ 
		ret = division(x,y);
		cout<<"Result:"<< ret << endl; 
	}

	catch(const char *s){
		cout<<"In catch..."<< endl;
		cout<< s << endl;
		goto vyshnav;
	}
}

float division(float x,float y){
	if(y == 0)
		throw "Divide by zero...";
	else
		return x/y;
}
