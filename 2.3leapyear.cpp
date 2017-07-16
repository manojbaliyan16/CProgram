#include <iostream>

using namespace std;

void leapyear(int year){
	if((year%4==0)||(year%400==0) && (year%100!=0))
		cout<<"Enter year is leap year"<<endl;
	else
		cout<<"Enter year is not leap year"<<endl;
}
int main(int argc, char const *argv[])
{
	int year;
	cout<<"Enter The Year"<<endl;
	cin>>year;
	leapyear(year);
	return 0;
}