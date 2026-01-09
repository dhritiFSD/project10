#include<iostream>
using namespace std;
int main()
{
	int hours;
	int totalseconds;
	int minute;
	int seconds;
	//enter totalseconds from user
	cout<<"Enter the totalsecond :";
	cin>>totalseconds;
	//convert hours into seconds
	 hours =totalseconds/3600;
	 //convert minute into seconds
	 minute =(totalseconds%3600)/60;
	 seconds =totalseconds%60;
	 //print your output
	cout<<"HH:MM:SS =>"
	<<hours<<":"
	<<minute<<":"
	<<seconds<<endl;
}
