#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter the value of n\n";
	cin>>n;
        for(i=0;i<n;i++)
        {
            if(i==1)
                printf("one");
            else if(i==2)
                printf("two");
            else if(i==3)
                printf("three");
            else if(i==4)
                printf("four");
            else if(i==5)
                printf("five");
            else if(i==6)
                printf("six");
            else if(i==7)
                printf("seven");
            else if(i==8)
                printf("eight");
            else if(i==9)
                printf("nine");
            else
                printf("Greater than 9");                
        }
}