#include<iostream>
using namespace std;
/*void IsPresent(int a[50][50],int target,int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;i<col;j++)
		{
			if(a[i][j]==target)
			{
				cout<<"Found";
				exit;
			}
			else 
				cout<<"Not Found";
				exit;
		}
	}
	
}*/
void PrintArray(int a[50][50],int row,int col)
{
	int i,j,target;
	bool flag;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"Enter the value for search\n";
	cin>>target;
	//IsPresent(a,target,3,3);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]==target)
			{
				flag=1;
				break;
			}
				
		}	
	}
	if (flag==1)
			cout<<"Found";
		else
			cout<<"Not Found";
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