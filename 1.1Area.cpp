/*
 * 1.1Area.cpp// To calculate The Surface Area of a ball
 *
 *  Created on: 13-Jul-2017
 *      Author: manojk16
 */

#include <iostream>
#define pi 3.14151
using namespace std;

float findArea(float& r){

	return 4*pi*r*r;
}

int main(){
	float radius;
cout<<"Enter the Radius of Ball"<<endl;
cin>>radius;

float suraceArea=findArea(radius);
cout<<"Surface Area is ::" << suraceArea<<endl;
}




