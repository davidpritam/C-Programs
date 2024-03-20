#include<iostream>
using namespace std;
class Myclass
{
	public:
	void switchcase(float a,float b);
};
void Myclass::switchcase(float a,float b)
{
	int choice,n;
	float sum,sub,multi,div;
	while(1)
	{
		cout<<"Press 1 for find sum "<<endl;
		cout<<"Press 2 for find substraction "<<endl;
		cout<<"Press 3 for find Multiplication "<<endl;
		cout<<"Press 4 for find Division "<<endl;
		cout<<"Press 5 for exit from the loop "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
			 sum=a+b;
			cout<<"Your sum is "<<sum<<endl;
			break;
			
			case 2:
			 sub=a-b;
			cout<<"Your substraction is "<<sub<<endl;
			break;
			
			case 3:
			 multi=a*b;
			cout<<"Your Multiplication is "<<multi<<endl;
			break;
			
			case 4:
			if(b==0)
				cout<<"Division is not possible "<<endl;
			else
			{
			 div=a/b;
			cout<<"Your Division is "<<div<<endl;
			}
			
			default:
			cout<<"Enter a valid choice "<<endl;
			
		}
		cout<<"Do You want to continue "<<endl;
		cin>>n;
		if(n==5)
		break;
	}
	
}
int main()
{
	float Num1,Num2;
	cout<<"Enter first No "<<endl;
	cin>>Num1;
	cout<<"Enter second No "<<endl;
	cin>>Num2;
	Myclass obj;
	obj.switchcase(Num1,Num2);
	return 0;
	
}