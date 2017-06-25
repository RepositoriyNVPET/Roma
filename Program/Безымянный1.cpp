#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
 
using namespace std;

int main()
{
	float metr, km;
	setlocale(LC_CTYPE, "ukr");
	cout<<"введіть метри:";
	cin>>metr;
	km=metr*0.001;
	cout<<metr<<" метрів - це "<<km<<" кілометра(ів)";
	getch();
}
