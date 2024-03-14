#include<iostream>
using namespace std;
int main()
{
	int i,j,row,col,a[40][40];
	cout<<"Enter the no of row\n";
	cin>>row;
	cout<<"Enter the no of column\n";
	cin>>col;
	//row wise input
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"Enter the pocket elements ["<<i<<"]["<<j<<"]\n";
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
	cout<<"Array after sine wave\n";
	for(j=0;j<col;j++)
	{
		if(j&1)
		{
			for(i=0;i<row;i++)
			{
				cout<<a[j][i]<<"\t";
			}
		}
		else 
		{
			for(i=(row-1);i>=0;i--)
			{
				cout<<a[j][i]<<"\t";
			}
		}
		cout<<"\n";
	}
	return 0;
}