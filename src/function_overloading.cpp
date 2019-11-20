/*program will print different datatype variables using same function name*/

#include"cpplib"
using namespace std;

class A{
	public:
		void print(int x){
			cout<<"int -x="<<x<<endl;
		}
		void print(float f){
			cout<<"float -f="<<f<<endl;
		}
		void print(double d){
			cout<<"double -d="<<d<<endl;
		}
		void print(char c){
			cout<<"char -c="<<c<<endl;
		}
};

int main(){

	A t;
	t.print(10);
	t.print(10.10f);
	t.print(10.500);
	t.print('a');
}
