#include<iostream>
using namespace std;
int main()
{
	int n;
	float f=1,sum=0;
	cout<<"Enter the value of n\n";
	cin>>n;
	for(float i=1;i<=n;i++)
	{
		f=f*i;
		sum=sum+1/f;
	}
	cout<<"The sum of factorial series is  "<<sum;
	return 0;
}