#include"../inc/cpplib"
using namespace std;

main(){
	ofstream fout("file");
	fout<< "hello" << endl;
	fout<< "hi" << endl;
        fout.close();
}
