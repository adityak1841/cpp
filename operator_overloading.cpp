#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public: void getReal()
	        {
	        	cout<<"enter real part"<<endl;
	        	cin>>real;
			}
			void getImg()
			{
				cout<<"enter imginary part"<<endl;
				cin>>img;
			}
			void display()
			{
				cout<<real<<"+"<<img<<"i"<<endl;
			}
			complex operator +(complex ob);
			
			void operator ++()
			{
				real=real+1;
				img=img+1;
			}
};
complex complex::operator +(complex ob)
{
	complex T;
	T.real=real+ob.real;
	T.img=img+ob.img;
	return (T);
}
int main()
{
	complex c1,c2,c3;
	c1.getReal();
	c1.getImg();
	c2.getReal();
	c2.getImg();
	c1.display();
	c2.display();
	c3=c1+c2;
	cout<<"sum of complex number is:";
	c3.display();
	cout<<"after increment num is :";
	++c3;
	c3.display();
}