#include"../inc/cpplib"
using namespace std;

int main(int argc,char **argv){
	int l;

	if(argc != 2){
		cout<<"Usage: ./a.out fname..."<< endl;
		return 0;
	}

	ifstream fin;
	ofstream fout;
	fin.open(argv[1],ios::in|ios::out);
	fout.open(argv[1],ios::in|ios::out);

	if(fin.fail()){
		cout<<"File Not present..."<< endl;
		return 0;
	}

	char s[50],ch;

	while((ch=fin.get())!=-1){
		fin.seekg(-1,ios::cur);
		while((ch=fin.get())!='\n'){
			fin.seekg(-1,ios::cur);
			fin >> s;
			l=strlen(s);
			s[0]=s[0]^32;
			s[l-1]=s[l-1]^32;
			fout << s;
			fout << ' ';
		}
		fout << '\n'; 
	}
}

