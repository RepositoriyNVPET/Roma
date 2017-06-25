#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
 
using namespace std;

int main()
{   
	float S, a, h;
	setlocale(LC_CTYPE, "ukr");
	cout<<"Введіть сторону трикутника:";
	cin>>a;
	h=a*2;
	S=0.5*a*h;
	cout<<"Висота трикутника: "<<h<<" од.\n";
	cout<<"Площа трикутника: ";
	printf("%.2f", S);
	cout<<" кв. од.";
	return 0;
	getch();
}
