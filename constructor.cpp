#include<iostream>
using namespace std;

class Myclass
{
	string name;
	int roll,marks;
	public:
	Myclass(string n,int r,int m)
	{
		name=n;
		roll=r;
		marks=m;
	}
	void display()
	{
		cout<<"Name= "<<name<<endl;
		cout<<"Roll no= "<<roll<<endl;
		cout<<"Marks= "<<marks<<endl;
	}
};
int main()
{
	Myclass m("Priytam",34,99);
	m.display();
}