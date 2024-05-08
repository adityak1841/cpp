#include<iostream>
#include<iomanip>
using namespace std;
class employee
{
	public :char name[10];
	        int salary,gross_salary;
	public :void display();
	        void get();
};
void employee::get()
{
	int da,hra;


		cout<<"enter name"<<endl;
		cin>>name;
		cout<<"enter salary"<<endl;
		cin>>salary;
		
		da=0.8*salary;
		hra=0.2*salary;
		gross_salary=da+hra+salary;
		
	
}
int main()
{
	employee s[10];
	int i,n;
	cout<<"enter num of employee"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
			s[i].get();
	}
	cout<<endl;
	
	cout<<"name\t gross salary"<<endl;
	for(i=0;i<n;i++)
	{
			s[i].display();
	}
	
	
}

void employee::display()
{   
    
	cout<<endl;
	
	cout<<name<<setw(10)<<gross_salary<<endl;

}