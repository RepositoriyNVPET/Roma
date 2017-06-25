#include <iostream>
#include <math.h>
#include <conio.h>

/*
d1 = va2 + b2 + 2ab·cos?

d2 = va2 + b2 - 2ab·cos?
*/
using namespace std;

double f(double a,double b,double alpha) //ф-ція для обрах. 1 діагоналі
{double d1,d2;
	 d1=sqrt(a*a+b*b+2*a*b*cos(alpha));
	 d2=sqrt(a*a+b*b-2*a*b*cos(alpha));
	cout<<"Сторона а: "<<a<<"\nСторона b: "<<b<<"\nКут між ними: "<<alpha<<endl;
	cout<<"При таких вхідних даних\n";
	cout<<"Значення діагоналі d1 рівне : "<<d1<<endl;
	cout<<"Значення діагоналі d2 рівне : "<<d2<<endl;
	cout<<"-----------------------------------------------------\n";
}
int main()
{
	setlocale(LC_CTYPE, "ukr");
	double a,b,d1,d2,alpha;
	for(int i=1; i<4; i++)
	{
	cout<<"Введіть сторону а: ";
	cin>>a;
	cout<<"Введіть сторону b: ";
	cin>>b;
	cout<<"Кут між ними: ";
	cin>>alpha;
	f(a,b,alpha);
	}
	system("pause"); 
	return 0;	
}
