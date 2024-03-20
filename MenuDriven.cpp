#include<iostream>
using namespace std;
int main()
{
	int n;
	int  ch;
	int fact=1;
	while(1)
	{
		cout<<"Press 1 for find even or odd "<<endl;
		cout<<"Press 2 for find factorial   "<<endl;
		cout<<"Press 3 for exit from the loop "<<endl;
		cin>>n;
		switch(n)
		{
			case 1:
			int no;
			cout<<"Enter a no "<<endl;
			cin>>no;
			if(no%2==0)
				cout<<"Even "<<endl;
			else
				cout<<"Odd "<<endl;
			break;
			
			case 2:
			int n1;
			cout<<"Enter a no to find factorial "<<endl;
			cin>>n1;
			
			for(int i=1;i<=n1;i++)
				fact=fact*i;
		
			cout<<"Factorial is "<<fact<<endl;
			break;
			
			default:
				cout<<"Choose right choice "<<endl;
			break;
			
		}
		cout<<"Do you want to continue "<<endl;
		cin>>ch;
		if(ch==3)
			break;
	}
	return 0;
}