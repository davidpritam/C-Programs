#include<iostream>
using namespace std;
class Myclass
{
	public:
	int  factorial(int x);
};

int  Myclass::factorial(int x)
{
	int f=1;
	for(int i=1;i<=x;i++)
	{
		f=f*i;
	}
	return f;
}

int main()
{
	int n;
	cout<<"Enter the value of n"<<"\n";
	cin>>n;
	Myclass obj;
	obj.factorial(n);
	int z=obj.factorial(n);
	cout<<"The factorial is  "<<z;
	
	return 0;
}