#include<iostream>
using namespace std;
int main()
{
	int n,m,a[50],b[50],i;
	cout<<"Enter the value of n\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the pocket element["<<i<<"]\n";
		cin>>a[i];
	}
	
	cout<<"Enter the value of m\n";
	cin>>m;
	for(i=0;i<m;i++)
	{
		cout<<"Enter the pocket element["<<i<<"]\n";
		cin>>b[i];
	}
	int sum=n+m;
	cout<<sum<<"\n";
	int c[50];
	cout<<"Your Merge Array is\n";
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<m;i++)
	{
		c[n+i]=b[i];
	}
	for(i=0;i<sum;i++)
	{
		cout<<c[i]<<"\t";
	}
	return 0;
}