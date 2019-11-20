/*write a program to display employee details*/

#include "../inc/cpplib"
using namespace std;

class person{
	public:
		char name[100];
		int ID;
		void input(){
			cout<<"\nEnter the name of the person : ";
			cin>>name;
			cout<<endl<<"ID : ";
			cin>>ID;
		}
		void display(){
			cout<<endl<<"Name of the person : "<<name;
			cout<<endl<<"ID of the person : "<<ID;
		}
};

class account:virtual public person{
	public:
		float salary;
		void getpay(){
			cout<<endl<<"Enter the salary : ";
			cin>>salary;

		}
		void display(){
			cout<<endl<<"salary : "<<salary;
		}
};

class admin:virtual public person{
	public:
		int experience;
		void getexp(){
			cout<<endl<<"Enter the experience : ";
			cin>>experience;

		}
		void display(){
			cout<<endl<<"Experience : "<<experience;
		}
};
class master:public account,public admin{
	public:
		char n[100];
		void gettotal(){
			cout<<endl<<"Enter the company name : ";
			cin>>n;
		}
		void display(){
			cout<<endl<<"Company name : "<<n;
		}
};

int main(){
	master m1;
	m1.input();
	m1.getpay();
	m1.getexp();
	m1.gettotal();
	m1.person::display();
	m1.account::display();
	m1.admin::display();
	m1.display();
	return 0;
}

