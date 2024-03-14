#include<iostream>
using namespace std;
int main()
{
	int row,col,i,j;
	int a[50][50];
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
	cout<<"Your Array is given below"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"Your Spiral Array is given below"<<endl;
	int total=(row*col);
	int count=0;
	int minr=0;
	int maxr=(row-1);
	int minc=0;
	int maxc=(col-1);
	while(count<total)
	{
		//printing first row:
		for(int j=minc;j<=maxc;j++)
		{
			cout<<a[minr][j]<<"\t";
			count++;
		}
		minr++;
		if(count>=total) break;
		//printing last column:
		for(int i=minr;i<=maxr;i++)
		{
			cout<<a[i][maxc]<<"\t";
			count++;
		}
		maxc--;
		if(count>=total) break;
		//printing lower row:
		for(int j=maxc;j>=minc;j--)
		{
			cout<<a[maxr][j]<<"\t";
			count++;
		}
		maxr--;
		if(count>=total) break;
		//printing first column:
		for(int i=maxr;i>=minr;i--)
		{
			cout<<a[i][minc]<<"\t";
			count++;
		}
		minc++;
		
	}
	return 0;
}