#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
 
using namespace std;

int main()
{ 	
	float x,y,G;
	setlocale(LC_CTYPE, "ukr");
	cout<<"������ �: ";
	cin>>x;
	cout<<"������ �: ";
	cin>>y;
	G=(x+sin(y+5.2)*log(abs(x*y)))/(sqrt(x*x+pow(y,4))-cos((x*y)/(sqrt(x*x+y*y))));
	cout<<"³������: "<<G;
	getch();
}
