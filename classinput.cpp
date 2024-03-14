#include<iostream>
using namespace std;

class Myclass
{
	public:
	void display(char Name[],string roll)
	{
		cout<<" Name = "<<Name;
		cout<<" Roll no = "<<roll;
	}
};
int main()
{
	char Name[100];
	string roll;
	cout<<"Enter a name of student \n";
	cin>>Name;
	cout<<"Enter a Roll no\n";
	cin>>roll;
	Myclass p;
	p.display(Name,roll);
	
}