#include <iostream>
using namespace std;
//print the Fibnacci Nubmer for a given number
int  fibrecur(int n)
{
	if(n<3)
		return 1;
	else
	return fibrecur(n-1)+fibrecur(n-2);
}
int main(){
	int num;
	cout<<"Enter the Number"<<endl;
	cin>>num;
	int n=fibrecur(num);
	cout<<"Finaaci Number is " << n <<endl;
}