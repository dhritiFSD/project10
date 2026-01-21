#include<iostream>
using namespace std;
class Sample
{
	int value;
	public:
		Sample(int v)
		{
			value=v;	
		}
		Sample(const Sample &obj)
		{
			value=obj.value;	
		}
		void show()
		{
			cout<<value<<endl;	
		}	
};
int main()
{
	Sample s1(10);
	Sample s2=s1;
	s2.show();
}
