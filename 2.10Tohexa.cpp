//Convert the given integer in to hexaDecimal

#include <iostream>
using namespace std;

void convertToHexa(int num){
	char hexaDecimal[100];
	int j=0;
	while(num){
		int remainder=num%16;
		if(remainder<10){
			hexaDecimal[j++]=remainder+48;
		}
		else{
			hexaDecimal[j++]=remainder+55;
		}

		
		num=num/16;
		}
		for (int i = j; i >=0 ; i--)
		{
			cout<< "HexaDecimal Numbers are :" << hexaDecimal[i];
		}
		cout<<"endl;"
	
}

int main()
{
	long int num;
	cout<<"Enter The Number To Be Conerted"<<endl;
	cin>>num;
	convertToHexa(num);

	return 0;
}