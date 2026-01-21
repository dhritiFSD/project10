#include<iostream>
using namespace std;
class Student
{
	private:
		int roll;
		public:
			Student()
			{
				roll=0;
				cout<<"Default constructor called"<<endl;	
			}
			Student(int r)
			{
				roll=r;
				cout<<"Parameterized constructor called"<<endl;
			}
			~Student()
			{
				cout<<"Destructor called"<<endl;
			}
			void Display()
			{
				cout<<"Roll Number"<<roll<<endl;
			}
};
int main()
{
	cout<<"Create an object"<<endl;
	Student s1;
	s1.Display();
	cout<<"create an object for parameter"<<endl;
	Student s2(10);
	s2.Display();
}
