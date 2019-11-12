/*employee record using multiple inheritance*/
#include<iostream>
using namespace std;

class personal
{
	protected:
		char name[50];
		int id;
		char gender;
	public:
		void getdata()
		{
			cout<<"enter employeee personal details...."<<endl;
			cout<<"name : ";
			cin.getline(name,50);
			cout<<"\nid : ";
			cin>>id;
			cout<<"gender : ";
			cin>>gender;
		}
};
class company
{
protected:
char depart[50];
char project[30];
int time;
public:
		void getdatacompany()
		{
			cout<<"enter department details...."<<endl;
			cout<<"name : ";
		        cin.ignore(1);
                	cin.getline(depart,50);
			cout<<"\nproject name : ";
			cin.getline(project,30);
			cout<<"total project duration : ";
			cin>>time;
		}
};
class derived:private personal,private company
{
public:
                void getbase()
                {
                 getdata();
                 getdatacompany();
                }
		void printdata()     //accessing protected data
		{
			cout<<"\nemployeee personal details...."<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"id : "<<id<<endl;
			cout<<"gender : "<<gender<<endl;
			cout<<"\nemployeee compamy details...."<<endl;
			cout<<"department : "<<depart;
			cout<<"project : "<<project<<endl;
			cout<<"duration : "<<time<<endl;
		}
};

int main()
{
derived d;
d.getbase();
d.printdata();
}
