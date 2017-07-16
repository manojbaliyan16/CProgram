#include <iostream>
using namespace std;
int Palindrom(int x){
	int rev=0;
	int y=x;
	while(x){
		int r=x%10;
		x=x/10;
		rev=rev*10+r;

	}
	if(y==rev){
		return 0;
	}
	else
		return 1;
}

int main(){
	int num;
	cout<<"Enter The Number to be check"<<endl;
	cin>>num;
	int x=Palindrom(x);
	if(x==0){
		cout<<"Given Number " << num <<" is Plaindrom " <<endl; 
	}
	else
		cout<<"Given Number " << num <<"is not Plaindrom " <<endl; 

}