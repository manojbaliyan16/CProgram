#include <iostream>
#include <cmath>

using namespace std;

int prime(int number){
	for (int i = 2; i <= sqrt(number); ++i)
	{
		if(number%i!=0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}

}
int main(int argc, char const *argv[])
{
	int num;
	cout<<"Enter A Numebr"<<endl;
	cin>>num;
	int pnumber=prime(num);
	if(pnumber==0)
	{
		cout<<"Given Number is prime"<<endl;
	}
	else
	{
		cout<<"Given Number is not Prime"<<endl;
	}
		
	return 0;
}
	
