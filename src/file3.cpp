#include"../inc/cpplib"
using namespace std;

int main(int argc,char **argv){
	if(argc!=2){
		cout<<"a.out <file path>"<< endl;
		return 0;
	} 

	char s[50];
	ifstream fin;
	fin.open(argv[1]);
	if(fin.fail()){
		cout<<"File Not present"<< endl;
		return 0;
	}
	fin.getline(s,50);
	cout<< s << endl;
	fin.close();
}
