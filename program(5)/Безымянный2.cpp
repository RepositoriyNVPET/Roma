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
	cout<<"������ ������: ";
	cin>>a>>b;
	cout<<"������ ����: ";
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
	 	cout<<"\n������������ ��i�?(1-���, 0-�): ";
	 	cin>>c;
	}
	while(c!=0);
}
