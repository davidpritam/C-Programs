#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float p,r,t;
	cout<<"Enter the value of principal"<<endl;
	cin>>p;
	cout<<"Enter the value of rate"<<endl;
	cin>>r;
	cout<<"Enter the value of time"<<endl;
	cin>>t;
	float si=(p*r*t)/100;
	cout<<setw(10)<<"Principal="<<setw(6)<<p<<setw(4)<<r<<setw(4)<<t<<setw(8)<<si<<endl;
	return 0;
}