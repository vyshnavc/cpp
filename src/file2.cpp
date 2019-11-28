#include"../inc/cpplib"
using namespace std;

main(){
	char s[20];
	ifstream fin("file");
	fin.getline(s,20);
	ofstream fout("vyshnav");
	fout<< s << endl;
	remove("file");
	rename("vyshnav","file");
}
