/*
 * 1.2Array.cpp//Taken an array o radius of footall
 *
 *  Created on: 13-Jul-2017
 *      Author: manojk16
 */

#include <iostream>
using namespace std;
#define pi 3.14151

float findArea(float& r){

	return 4*pi*r*r;
}

int main(){
	float radius[50];
	float area[50];
	
cout<<"Enter the Radius of Ball"<<endl;
for (int i = 0; i < 10; ++i)
	{
		radius[i]=(float)i+1.0;		
	}

for (int j = 0; j < 10; ++j)
{
	area[j]=findArea(radius[j]);	
}

for (int i = 0; i < 10; ++i)
{
 cout<<"Area in respest to the Radius::" << radius[i] <<" is  "<<  area[i] <<endl;
}

}

