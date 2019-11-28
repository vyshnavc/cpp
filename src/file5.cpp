#include"../inc/cpplib"
using namespace std;

main(int argc,char **argv){
	if(argc!=3){
		cout<<"Usage: ./a.out src_file dest_file"<< endl;
		return 0;
	}

	char s[30];
	ifstream fin(argv[1],ios::in);
	ofstream fout(argv[2],ios::out);
	if(fin.fail()){
		cout<<"File Not present..."<<endl;
		return 0;
	}

	while(fin.getline(s,30))
		fout<< s << endl;
	fin.close();
	fout.close();
}
