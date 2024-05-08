#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class person
{
 public:  string name;
          double cell_num;
          string city;
 public:
         void get_data_p()
         {
          cout<<"enter name"<<endl;
          cin>>name;
          cout<<"enter cell number"<<endl;
          cin>>cell_num;
          cout<<"enter city name"<<endl;
          cin>>city;
          
         }
          
         void dislpay_person()
         {
          cout<<"name"<<setw(10)<<"cell num"<<setw(10)<<"city"<<endl;
          cout<<name<<setw(10)<<cell_num<<setw(10)<<city<<endl;
         
         }
           
};
class employee:public person
{
 public:  double id;
          string designation;
          double salary;
 public: 
          void get_data_e()
           {
            cout<<"enter id"<<endl;
            cin>>id;
            cout<<"enter designation"<<endl;
            cin>>designation;
            cout<<"enter salary"<<endl;
            cin>>salary;
           }          
          void display_ep()
          {
           
           cout<<name<<setw(10)<<cell_num<<setw(10)<<city<<setw(10)<<id<<setw(20)<<designation<<setw(20)<<salary<<endl;
           
          }
     
};
int main()
{
 employee e[2];
 for(int i=0;i<2;i++)
 {
  e[i].get_data_p();
  e[i].get_data_e();
  
  
 }
  cout<<"name"<<setw(10)<<"cell no"<<setw(10)<<"city"<<setw(10)<<"id"
           <<setw(20)<<"designation"<<setw(20)<<"salary"<<endl;
           
           
  for(int i=0;i<2;i++)
 {
  
  e[i].display_ep();
  
 }

}
