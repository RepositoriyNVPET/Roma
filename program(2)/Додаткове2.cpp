#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

float f(float a, float b,float c, float x, float xn)
{   float F,h=1;
	while(x<=xn)
{	
	if(c<0 && x!=0)
	{
		F=-a*x-c;
	}
	else
		if(c>0 && x==0)
		{
			F=(x-a)/(-c);
		}
		else
		{
			F=(b*x)/(c-a);
		}
	cout<<"\n³������: "<<F;
	x=x+h;
}
}

int main()
{
	setlocale(LC_CTYPE, "ukr");
	float F,a,b,c,x,xn;
	cout<<"������ ���� a,b,c: ";
	cin>>a>>b>>c;
	cout<<"������ ������: ";
	cin>>x>>xn;
	int h=1;
	cout<<"--------------------------------------\n";
	cout<<"\t ������� ���������� ����������:\n";
	f(a,b,c,x,xn);
	return 0;
}
