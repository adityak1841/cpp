#include<iostream>
using namespace std;

class product
{
	private:
		string name;
		float price;
		int quantity;
		
		public:
			product(std::string productname,float productprice,int productquantity)
		{
			name=productname;
			price=productprice;
			quantity=productquantity;
			}	
			string getname()const
			{
			return name;
			}
			float getprice()const
			{
				return price;
		    }
		    int getquantity() const
		    {
				return quantity;
			}
		 void setname(string newname)
		    {
			name=newname;
			}					
		void setprice(float newprice)	
			{
				price=newprice;
			}
		void setquantity(int newquantity)
		    {
				quantity = newquantity;
			}	
		void displayinfo()const
		{
			cout<<"product name:"<<name<<endl;
			cout<<"product price:"<<price<<endl;
			cout<<"product quantity:"<<quantity<<endl;
		}
};

int main()
		{
			product product1("laptop",50000,2);
			product1.displayinfo();
			return 0;
		}
	


