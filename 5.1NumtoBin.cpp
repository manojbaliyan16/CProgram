#include <iostream>
using namespace std;
void numToBin(int  num){
	
		if(num/2)
			numToBin(num/2);
		cout<<num%2;
}
int main(){

	int num;
	cout<<"Enter the Number to Convert in to Bin"<<endl;
	cin>>num;
	numToBin(num);
	cout<<"\n";
	return 0;
}