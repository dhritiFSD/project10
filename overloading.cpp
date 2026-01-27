#include<iostream>
using namespace std;
class Student
{
	public:
	int add(int a,int b)
	{
		return a+b;
	}
	float add(float a,float b)
	{
		return a+b;
	}	
};
int main()
{
	Student s;
	cout<<s.add(5.2f,2.5f)<<endl;
	cout<<s.add(1,2);	
}
