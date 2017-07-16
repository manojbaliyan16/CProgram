#include <iostream>
using namespace std;

void tooctal(int deciNum){
	int arr[100];
	int i=0;
	int r;
	while(deciNum>0){
		
		r=deciNum%8;
		deciNum=deciNum/8;
		
		arr[i++]=r;
		
	}
	
	
	cout<<"Decimal Number in to Octal is "<<endl;
	for(int j=i-1; j>=0;--j){
		cout<<arr[j];
	}

}

int main(){

	int num;
	cout<<"Enter the Number to Convert"<<endl;
	cin>>num;
	tooctal(num);
	cout<<"\n";
	return 0;
}

