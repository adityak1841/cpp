#include<iostream>
#include<iomanip>
using namespace std;
struct student
{
	char name[20],prn[20],email[10];
	int percentage;
};
int main()
{
	struct student s[50];
	int n;
	cout<<"enter num of student"<<endl;
	cin>>n;
		for(int i=0;i<n;i++)
	{
		cout<<"enter name"<<endl;
		cin>>s[i].name;
		cout<<"enter prn"<<endl;
		cin>>s[i].prn;
		cout<<"enter email"<<endl;
	    cin>>s[i].email;
		cout<<"percentage"<<endl;
		cin>>s[i].percentage;
	}
	cout<<endl;
	cout<<"student info:"<<endl;
	cout<<"name\t prn\temail\t percentage"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<s[i].name<<setw(10);
		cout<<s[i].prn<<setw(15);
		cout<<s[i].email<<setw(10);
		cout<<s[i].percentage<<endl;
	}
}
