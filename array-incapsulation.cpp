#include<iostream>
using namespace std;
class student
{
	int roll;
	public:
	void getData(int r)
	{
		roll=r;	
	}
	void showData()
	{
		cout<<"Roll No:"<<roll<<endl;
	}	
};
int main()
{
	student s[3];
	for(int i=0;i<3;i++)
	{
		s[i].getData(i+1);
	}
	for(int i=0;i<3;i++)
	{
		s[i].showData();
	}
}
