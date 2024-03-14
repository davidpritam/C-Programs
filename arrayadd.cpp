#include<iostream>
using namespace std;
int main()
{
	int a[100][100],b[100][100],c[100][100];
	int row,col;
	cout<<"Enter the row\n";
	cin>>row;
	cout<<"Enter the column\n";
	cin>>col;
	cout<<"Enter first matrix\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<"Enter element in pocket["<<i<<"]["<<j<<"]\n";
			cin>>a[i][j];
		}
	}
	cout<<"Enter second matrix\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<"Enter element in pocket["<<i<<"]["<<j<<"]\n";
			cin>>b[i][j];
		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<c[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
	
}