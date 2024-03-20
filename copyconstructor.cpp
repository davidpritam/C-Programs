#include<iostream>
using namespace std;
class SampleCopy
{
	int x,y;
	public:
	SampleCopy(int n1,int y1)
	{
		x=n1;
		y=y1;
	}
	SampleCopy(const SampleCopy & sam)
	{
		x=sam.x;
		y=sam.y;
	}
	void display()
	{
		cout<<x<<endl;
		cout<<y<<endl;
	}
};
int main()
{
	SampleCopy obj1(10,15);
	SampleCopy obj2=obj1;
	cout<<" constructor "<<endl;
	obj1.display();
	cout<<"Copy constructor  "<<endl;
	obj2.display();
}