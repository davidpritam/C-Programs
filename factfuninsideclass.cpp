#include<iostream>
using namespace std;

class Myclass
{
	public:
	void factorial(int x)
	{
		int f=1;
		for(int i=1;i<=x;i++)
		{
			f=f*i;
		}
		cout<<"The factorial is "<<f;
	}
};

int main()
{
	int n;
	cout<<"Enter the value of n"<<"\n";
	cin>>n;
	Myclass obj;
	obj.factorial(n);
	return 0;
}