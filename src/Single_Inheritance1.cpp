/*C++ program to read and print students information using two classes and simple inheritance.*/

#include <iostream>
using namespace std;

//Base class
class std_basic_info
{
	private:
		char name[30];
		int  age;
		char gender;
	public:
		void getBasicInfo(void);
		void putBasicInfo(void);
};
//derived class
void std_basic_info::getBasicInfo(void)
{
	cout << "Enter student's basic information:" << endl;
	cout << "Name?: ";    cin >> name;
	cout << "Age?: ";     cin >> age;
	cout << "Gender?: ";cin >> gender;
}

void std_basic_info::putBasicInfo(void)
{
	cout << "Name: " << name << ",Age: " << age << ",Gender: " << gender << endl;
}

//Derived class
class std_result_info:public std_basic_info
{
	private:
		int     totalM;
		float   perc;
		char    grade;
	public:
		void getResultInfo(void);
		void putResultInfo(void);
};

//function definitions
void std_result_info::getResultInfo(void)
{
	cout << "Enter student's result information:" << endl;
	cout << "Total Marks?: ";     cin >> totalM;
	perc= (float)((totalM*100)/500);
	cout << "Grade?: ";cin >> grade;
}

void std_result_info::putResultInfo(void)
{
	cout << "Total Marks: " << totalM << ",Percentage: " << perc << ",Grade: " << grade << endl;
}

int main()
{
	//create object of derived class
	std_result_info std;

	//read student basic and result information
	std.getBasicInfo();
	std.getResultInfo();

	//print student basic and result information
	std.putBasicInfo();
	std.putResultInfo();

	return 0;
}

