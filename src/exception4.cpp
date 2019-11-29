#include"../inc/cpplib"
using namespace std;

main(){
   try{
       throw "Unhandled...";
   }

   catch(...){
       cout<<"In catch..."<< endl;
   }
}
