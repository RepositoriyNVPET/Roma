#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
 
using namespace std;

int main()
{
	float metr, km;
	setlocale(LC_CTYPE, "ukr");
	cout<<"������ �����:";
	cin>>metr;
	km=metr*0.001;
	cout<<metr<<" ����� - �� "<<km<<" ��������(��)";
	getch();
}
