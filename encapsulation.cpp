#include<iostream>
using namespace std;
class student
{
	private:
	string name;
	int age;
	public:
	void setName(string name)
	{
		this->name=name;	
	}
	string getName()
	{
		return name;	
	}
	void setAge(int age)
	{
		if(age>0)
		{
			this->age=age;	
		}
		else
		{
			cout<<"Age must be greater than 0"<<endl;	
		}	
	}
	int getAge()
	{
		return age;	
	}	
};
int main()
{
	student obj;
	obj.setName("Dhriti");
	obj.setAge(19);
	cout<<"Student Age:"<<obj.getName()<<endl;
	cout<<"Student Age:"<<obj.getAge()<<endl;
}
