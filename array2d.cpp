#include<iostream>
using namespace std;
int main()
{
	int row ,col,a[100][100],d;
	cout<<"Enter row\n";
	cin>>row;
	cout<<"Enter column\n";
	cin>>col;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<"Enter element in pocket["<<i<<"]["<<j<<"]\n";
			cin>>a[i][j];
		}
	}
	cout<<"The determinant is given below\n";
	d=a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2]))-a[0][1]*((a[1][0]*a[2][2])-(a[2][0]*a[1][2]))+a[0][2]*((a[1][0]*a[2][1])-(a[2][0]*a[1][1]));
	cout<<"The determinant is  "<<d;
	return 0;
}