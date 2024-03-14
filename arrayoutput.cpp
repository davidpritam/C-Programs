#include<iostream>
using namespace std;
int main()
{
	int a[100][100];
	int row,col;
	int i,j;
	cout<<"Enter the row\n";
	cin>>row;
	cout<<"Enter the column\n";
	cin>>col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"Enter the element of pocket["<<i<<"]["<<j<<"]\n";
			cin>>a[i][j];
		}
	}
	cout<<"Array before\n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"Array after Transpose\n";
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			cout<<a[j][i]<<"\t";
		}
		cout<<"\n";
	}
}