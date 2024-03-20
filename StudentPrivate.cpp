#include<iostream>
using namespace std;
class Myclass
{
	
};
void Myclass::Takedata()
{
	int admno;
	string sname;
	float eng,math,sci;
	cout<<"Enter the admission no"<<endl;
	cin>>admno;
	cout<<"Enter the student name"<<endl;
	cin>>sname;
	cout<<"Enter the mar bks of english,math and science"<<endl;
	cin>>eng>>math>>sci;
	int total=(eng+math+sci);
}
void Myclass::Showdata()
{
	cout<<"Admission no "<<admno;
	cout<<"Student name "<<sname;
	cout<<"English marks "<<eng;
	cout<<"Mathematics marks "<<math;
	cout<<"Science marks "<<sci;
}
int main()
{
	Myclass obj;
	obj.Takedata();
	obj.Showdata();
}