#include<iostream>
using namespace std;
class Myclass
{
	string name;
	int roll,marks;
	public:
	Myclass()
	{
		name="abc";
		roll=00;
		marks=99;
	}
	Myclass(string s,int r,int m)
	{
		name=s;
		roll=r;
		marks=m;
	}
	void display()
	{
		cout<<"Name= "<<name<<endl;
		cout<<"Roll No= "<<roll<<endl;
		cout<<"Marks= "<<marks<<endl;
	}
};
int main()
{
	Myclass m;
	m.display();
}