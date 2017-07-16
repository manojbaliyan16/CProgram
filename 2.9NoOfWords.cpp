#include <iostream>
#include <stdio.h>
using namespace std;


int main()
{
	FILE *fp;
	char ch;
	int w=1;
	fp=fopen("manojfile.txt", "r");
	if(fp==NULL){
		cout<<"File Not Found"<<endl;
	}
	else{
		ch=fgetc(fp);
		while(ch!=EOF)
		{
			//	cout<<ch<<endl;
			if(ch==' '|| ch=='\0')
			{
				w++;
			}
			ch=fgetc(fp);
		}
		cout<<"Number of words is:: "<<w<<endl;
	}
	return 0;
}
