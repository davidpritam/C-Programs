#include<iostream>
using namespace std;
int main()
{
	int num;
	float n=0;
	cout<<"Enter the value of n\n";
	cin>>num;
	for(float i=1;i<=num;i++)
	{
		n=n+1/i;
	}
	cout<<"The sum of series is  "<<n;
	return 0;
}