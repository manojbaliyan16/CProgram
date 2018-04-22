
#include <iostream>
#include <cstring>

using namespace std;

void reversestr(char *str)
{
	char *begin=&str[0];
	int len=strlen(str)-1;
	char *end=&str[len];
	while(begin<end){
		char temp=*begin;
		*begin++=*end;
		*end--=temp;
	}
}

int main(){

	/*const char *temp="manoj";
	char *str=strdup(temp);*/
	char str[]="manoj";

	reversestr(str);
	cout<<"Reverse String is ::" << str <<endl;

	return 0;
}
