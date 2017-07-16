//Convert lowerCase Strin to Upper Case
#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main(){
	char str[100]="manoj";
	int len=strlen(str);
for(int i=0;i<len;i++)
{
	str[i]=str[i]-32;
}
cout<<"String is "<<endl;
for(int i=0;i<len;i++)
{
	cout<<str[i];
}
cout<<endl;
}