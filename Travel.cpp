#include<iostream>
using namespace std;

class calculation
{
	protected:
		float miles;
		float hours;
		float amounts;
		float as;
		float ng;
		float cg;
		
	public:

	float calculations(float mile,float hour,float amount)
	{
		
		miles=mile;
		hours=hour;
		amounts=amount;
		
		as=miles/hours;
		
		ng=miles/14.5;
		
		cg=86.75/ng;
		
		cout<<endl<<"Miles         :"<<miles;
		cout<<endl<<"Hours         :"<<hours;
		cout<<endl<<"Gas Cost      :"<<amounts;
		cout<<endl<<"Average Speed :"<<as;
		cout<<endl<<"No.Gallons    :"<<ng;
		cout<<endl<<"Cost .Gallon  :"<<cg;

	}
	



};

int main()
{
calculation e;
float mile;
float amount;
float hour;
cout<<endl<<"Enter Miles  :";
cin>>mile;
cout<<endl<<"Enter Hour   :";
cin>>hour;
cout<<endl<<"Enter Amount :";
cin>>amount;

e.calculations(mile,hour,amount); 

}

