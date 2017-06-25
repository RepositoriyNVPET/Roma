#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{	setlocale(0,"");
	float a, b, x, xn, x1, h, y;
	int c;
	do
	{ 
	cout<<"Введіть відрізок: ";
	cin>>a>>b;
	cout<<"Введіть крок: ";
	cin>>h;
	 x1=a;
	 xn=b;
	 x=x1;
	 do
	 {
	 	y=x*x+2*x-7;
	 	printf("\nx=%f\ty=%f", x, y);
	 	x=x+h;
	 }
	while(x<=xn);
	 	cout<<"\nПродовжувати ввiд?(1-так, 0-ні): ";
	 	cin>>c;
	}
	while(c!=0);
}
