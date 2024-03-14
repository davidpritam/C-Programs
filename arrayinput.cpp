#include<iostream>
using namespace std;
int main()
{
	int a[100][100],row,col;
	cout<<"Enter the row  \n";
	cin>>row;
	cout<<"Enter element in pocket["<<i<<"]["<<j<<"]\n";
	cin>>col;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<"Enter element\ng";
			cin>>a[i][j];
		}
	}
	cout<<"Your matrix is \n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
}