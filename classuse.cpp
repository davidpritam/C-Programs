#include<iostream>
using namespace std;

class Myclass
{
	char Name[100];
	string roll;
	public:
	void input()
	{	
		cout<<"Enter Name\n";
		cin>>Name;
		cout<<"Enter Roll No\n";
		cin>>roll;
	}
	void display()
	{
		cout<<"Name = "<<Name;
		cout<<"  Roll No = "<<roll;
	}
};
int main()
{
	Myclass p;
	p.input();
	p.display();
}
