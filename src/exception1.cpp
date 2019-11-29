#include"../inc/cpplib"
using namespace std;

main(){
	float x,y,res;

	cout<<"Enter x: ";
	cin >> x;
vyshnav:cout<<"Enter y: ";
     cin >> y;
     try{
	     if(y==0)
		     throw "Divide by zero...";
	     else
	     {
		     res=x/y;
		     cout<<"Result: "<< res << endl;
	     }
     }

     catch(const char *s)
     {
	     cout<<"In catch..."<< endl;
	     cout<< s << endl;
	     goto vyshnav;
     }
}
