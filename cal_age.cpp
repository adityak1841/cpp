#include<iostream>
#include<iomanip>
using namespace std;
class date
{
	public: int day,month,year;
	        int day1,month1,year1;
	public:
		   void set_date()
		   {
		   	cout<<"enter current date"<<endl;
		   	cout<<"enter date :";
		   	cin>>day;
		   	cout<<"enter month :";
		   	cin>>month;
		   	cout<<"enter year :";
		   	cin>>year;
		   	cout<<endl;
		   }
		   void set_data1()
		   {
		   	cout<<"enter birth date "<<endl;
		   	cout<<"enter date :";
		   	cin>>day1;
		   	cout<<"enter month :";
		   	cin>>month1;
		   	cout<<"enter year :";
		   	cin>>year1;
		   	cout<<endl;
		   }
		   void display()
		   {
		   	cout<<"current date is :";
		   	cout<<day<<"-"<<month<<"-"<<year<<endl;
		   	cout<<"birth date is :";
		   	cout<<day1<<"-"<<month1<<"-"<<year1<<endl;
		   	cout<<endl;
		   }
		   void cal_day()
		   {
		   	if(day<day1)
		   	{
		   		day=day+30;
		   		day=day-day1;
		   		month--;
			}
			else
			{
				day=day-day1;
			}
		   }
		   void cal_month()
		   {
		   	if(month<month1)
		   	{
		   	    month=month+12;
				month=month-month1;
				year--;	
		    }
		    else
		    {
		    	month=month-month1;
			}
		   }
		   void cal_year()
		   {
		   	year=year-year1;
		   }
		   
		   void diff()
		   {
		   	cout<<endl;
		   	cout<<"difference is :";
		   	cout<<"day:"<<day<<setw(10)<<"month:"<<month<<setw(10)<<"year:"<<year<<endl;
		   }
		  
		   
};

int main()
{
	date d;
	d.set_date();
	d.set_data1();
	d.display();
	d.cal_day();
	d.cal_month();
	d.cal_year();
	d.diff();
}