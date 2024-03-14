#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter the size of array";
	cin>>n;
	int arr[10];
	for(i=0;i<n;i++)
	{
		cout<<"Enter the element";
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 9;
}