#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
 
using namespace std;

int main()
{   
	float S, a, h;
	setlocale(LC_CTYPE, "ukr");
	cout<<"������ ������� ����������:";
	cin>>a;
	h=a*2;
	S=0.5*a*h;
	cout<<"������ ����������: "<<h<<" ��.\n";
	cout<<"����� ����������: ";
	printf("%.2f", S);
	cout<<" ��. ��.";
	return 0;
	getch();
}
