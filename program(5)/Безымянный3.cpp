#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL , "Russian" );
	float a, b, x, xn, x1, h, y; 
	int c;
	do{
	cout<<"Введіть відрізок: ";
	cin>>a>>b;
	cout<<"Введіть крок: ";
	cin>>h;
	 x1=a;
	 xn=b;
	 x=x1;
	 	while(x<=xn)
	 {
	 	y=x*x+2*x-7;
	 	printf("\nx=%f\ty=%f", x, y);
	 	x=x+h;
	 }
	 cout<<"\nПродовжувати ввiд?(1-так, 0-ні): ";
	 cin>>c;
	 }
	while(c!=0);
}
