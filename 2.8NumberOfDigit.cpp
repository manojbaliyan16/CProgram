//find the  numbber of digit from a given Number 

#include <iostream>
using namespace std;

int countNumberOfDigit(int num){
	int count=0;
	while(num){
		num=num/10;
		count++;
	}
	return count;
}
int main(int argc, char const *argv[])
{
	int num;
	cout<<"Enter any Numer"<<endl;
	cin>>num;
	int totalDigit=countNumberOfDigit(num);
	cout<<"Total Number of Digit in Number :" << num << " is " << totalDigit <<endl;
	return 0;
}