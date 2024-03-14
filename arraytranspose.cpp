#include<iostream>
using namespace std;
int main()
{
	int i,j,row,col;
	int a[100][100];
	cout<<"Enter the rows \n";
	cin>>row;
	cout<<"Enter the columns \n";
	cin>>col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"Enter the element of pocket["<<i<<"]["<<j<<"]\n";
			cin>>a[i][j];
		}
	}
	cout<<"The array before transpose is..\n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"The array after transpose is ..\n";
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			cout<<a[j][i]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}