#include"../inc/cpplib"
using namespace std;

main(int argc,char **argv){
	if(argc!=2){
		cout<<"a.out <file path>"<< endl;
		return 0;
	}

	char s[30];
	ifstream fin; 
	fin.open(argv[1]);
	if(fin.fail()){
		cout<<"File Not present..."<< endl;
		return 0;
	}
	while(fin.getline(s,30))
		cout<< s << endl;
	fin.close();
}
