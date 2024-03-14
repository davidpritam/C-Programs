#include<iostream>
using namespace std;
void PrintArray(int a[][50],int row,int col)
{
	int i,j,target;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
void InputArray(int a[][50])
{
	int row,col,i,j;
	cout<<"Enter the value of row\n";
	cin>>row;
	cout<<"Enter the value of col\n";
	cin>>col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"Enter the pocket elements["<<i<<"]["<<j<<"]\n";
			cin>>a[i][j];
		}
	}
	cout<<"Your Array is Given Below\n";
	PrintArray(a,row,col);
}

int main()
{
	int a[50][50];
	InputArray(a);
	return 0;
}