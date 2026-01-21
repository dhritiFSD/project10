#include<iostream>
using namespace std;
class parent
{
	public:
	void abc()
	{
		cout<<"Parent"<<endl;	
	}	
};
class child:public parent
{
	public:
	void pqr()
	{
		cout<<"Child"<<endl;
	}	
};
class child1:public parent
{
	public:
	void xyz()
	{
		cout<<"Supchild"<<endl;	
	}	
};
class child2:public parent
{
	public:
	void mnl()
	{
		cout<<"superchild"<<endl;	
	}	
};
int main()
{
	child obj;
	obj.pqr();
	obj.abc();
	
	child1 obj1;
	obj1.xyz();
	obj1.abc();
	
	child2 obj2;
	obj2.mnl();
	obj2.abc();
}
