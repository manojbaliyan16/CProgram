#include <iostream>
int max(int& num1, int& num2){
	return (num1 > num2 ? num1 : num2);
}
int main(){

	int num1;
	int num2;
	std::cout<<"Enter two Number"<<std::endl;
	std::cin>>num1>>num2;
	int x=max(num1,num2);
	std::cout<<"max Number is:: " << x <<std::endl;
 
}