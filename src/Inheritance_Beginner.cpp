#include <iostream>
using namespace std;

class Teacher {
	public:
		string collegeName;
		Teacher():collegeName("Beginnersbook"){
			cout<<"Hey Guys, I am a teacher"<<endl;
		}
};
//This class inherits Teacher class
class MathTeacher: public Teacher {
	public:
		string mainSub;
		string name;
		MathTeacher():mainSub("math"),name("negan"){
			cout<<"I am a Math Teacher"<<endl;
		}
};

int main() {
	MathTeacher obj;
	cout<<"Name: "<<obj.name<<endl;
	cout<<"College Name: "<<obj.collegeName<<endl;
	cout<<"Main Subject: "<<obj.mainSub<<endl;
}
