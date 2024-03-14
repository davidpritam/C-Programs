#include<iostream>
using namespace std;
int main()
{
	int i,j,row,col;
	int a[50][50];
	cout<<"Enter the rows\n";
	cin>>row;
	cout<<"Enter the columns\n";
	cin>>col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"Enter the element of pocket["<<i<<"]["<<j<<"]\n";
			cin>>a[i][j];
		}
	}
	int s[50][50];
	cout<<"The array is being  store at s[][] \n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			s[i][j]=a[i][j];
		}
	}
	cout<<"The array after stored is ...\n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<s[i][j]<<"\t";
		}
			cout<<"\n";
	}
	return 0;
}