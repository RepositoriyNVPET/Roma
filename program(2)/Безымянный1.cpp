#include <iostream>
#include <math.h>
#include <conio.h>

/*
d1 = va2 + b2 + 2ab·cos?

d2 = va2 + b2 - 2ab·cos?
*/
using namespace std;

double f(double a,double b,double alpha) //ф-ція для обрах. 1 діагоналі
{
	return sqrt(a*a+b*b+2*a*b*cos(alpha));
}
double f2(double a,double b,double alpha) //ф-ція для обрах. 2 діагоналі
{
	return sqrt(a*a+b*b-2*a*b*cos(alpha));
}
int main()
{
	setlocale(LC_CTYPE, "ukr");
	for(int i=1; i<4; i++)
	{
	double a,b,d1,d2,alpha;
	cout<<"Введіть сторону а: ";
	cin>>a;
	cout<<"Введіть сторону b: ";
	cin>>b;
	cout<<"Кут між ними: ";
	cin>>alpha;
	cout<<i<<")\n";
	cout<<"Сторона а: "<<a<<"\nСторона b: "<<b<<"\nКут між ними: "<<alpha<<endl;
	cout<<"При таких вхідних даних\n";
	cout<<"Значення діагоналі d1 рівне : "<<f(a,b,alpha)<<endl;
	cout<<"Значення діагоналі d2 рівне : "<<f2(a,b,alpha)<<endl;
	cout<<"-----------------------------------------------------\n";
	}
	system("pause"); 
	return 0;	
}
