#include"../inc/cpplib"
using namespace std;

main(int argc,char **argv){
	ofstream fout;
	ifstream fin;
	int x=10;
	char ch= 'A';
	float f=23.5;
	if(argc!=2){
		cout<<"Usage: ./a.out fname..."<< endl;
		return 0;
	}

	fout.open(argv[1],ios::out);
	fin.open(argv[2],ios::in);
	fout.write((char*)&x,sizeof x);
	fout.write(&ch,sizeof ch);
	fout.write((char*)&f,sizeof f);
	fin.read((char*)&x,sizeof x);
	fin.read(&ch,sizeof ch);
	fin.read((char*)&f,sizeof f);
	cout<<"x: "<< x <<"  "<<"ch: "<< ch <<"  "<<"f: "<< f << endl;
	fout.close();  
	fin.close();
}
