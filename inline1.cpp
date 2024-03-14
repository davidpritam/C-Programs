#include<iostream>
using namespace std;
inline int VolRoom(int x,int y,int z)
{
	return (x*y*z);
}
int main()
{
	int a,b,c;
	cout<<"Enter the Length,Breadth and Height\n";
	cin>>a>>b>>c>>;
	cout<<VolRoom(a,b,c);
	return 0;
}