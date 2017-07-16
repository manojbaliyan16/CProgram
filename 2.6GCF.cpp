#include <iostream>
using namespace std;


int gcf(int n1, int n2)
{
	int maxoftwo=(n1>n2)?n1:n2;
	while(maxoftwo)
	{
		if(n1%maxoftwo==0 && n2%maxoftwo ==0)
		{
			return maxoftwo;
		}
		maxoftwo--;
	}
}
int main(int argc, char const *argv[])
{
	int n1, n2;
	cin>>n1;
	cin>>n2;

	int commanFactor=gcf(n1,n2);
	cout<<"GCF of Two Numbers is "<< commanFactor <<endl;
	return 0;
}