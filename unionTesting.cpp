#include <iostream>

using namespace std;


union detail{
	int i;
	char ch[2];
	double ft;
};

typedef detail dt;

int main(){

	dt cust;
	cout<<"size id union is ::" << sizeof(dt) <<endl;
	cust.ch[0]='f';
	cust.ch[1]='s';


	cout<<"char value is ::" << cust.i<<endl;
}