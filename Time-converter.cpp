#include<iostream>
using namespace std;
int main()
{
	int hours;
	int minute;
	int seconds;
	int totalseconds;
	//Enter hours from user
	cout<<"Enter hours:";
	cin>>hours;
	//Enter minute from user
	cout<<"Enter minute:";
	cin>>minute;
	//Enter seconds from user
	cout<<"Enter second :";
	cin>>seconds;
	//convert this all in seconds
	totalseconds = (hours*3600)+(minute*60)+seconds;
	cout<<"Total seconds :"<<totalseconds;
}
