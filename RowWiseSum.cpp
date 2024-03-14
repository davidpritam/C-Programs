#include<iostream>
using namespace std;
int main()
{
	int i,j,row,col,a[20][20];
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
	int large=-1;
	for(i=0;i<row;i++)
	{
		int sum=0;
		for(j=0;j<col;j++)
		{
			sum=sum+a[i][j];
		}
		cout<<sum<<"\n";
		if(sum>large)
		{
			large=sum;
		}
	}
	cout<<"The largest element in row "<<large;
	return 0;
}