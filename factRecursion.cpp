//factorial By Recuresion
#include <iostream>

using namespace std;
int fact(int num){
	int ans;
if(num==0 || num ==1){
	return 1;
}
ans=num*fact(num-1);
return ans;
}
int main(int argc, char const *argv[])
{
	int num;
	cout<<"Enter The NUmber Whose Factorial is to be find out"<<endl;
	cin>>num;
	int ans=fact(num);
	cout<<"Factorial of given Number is ::"<< ans <<endl;

	return 0;
}