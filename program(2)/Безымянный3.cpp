#include <iostream>
#include <math.h>
#include <conio.h>

/*
d1 = va2 + b2 + 2ab�cos?

d2 = va2 + b2 - 2ab�cos?
*/
using namespace std;

double f(double a,double b,double alpha) //�-��� ��� �����. 1 �������
{double d1,d2;
	 d1=sqrt(a*a+b*b+2*a*b*cos(alpha));
	 d2=sqrt(a*a+b*b-2*a*b*cos(alpha));
	cout<<"������� �: "<<a<<"\n������� b: "<<b<<"\n��� �� ����: "<<alpha<<endl;
	cout<<"��� ����� ������� �����\n";
	cout<<"�������� ������� d1 ���� : "<<d1<<endl;
	cout<<"�������� ������� d2 ���� : "<<d2<<endl;
	cout<<"-----------------------------------------------------\n";
}
int main()
{
	setlocale(LC_CTYPE, "ukr");
	double a,b,d1,d2,alpha;
	for(int i=1; i<4; i++)
	{
	cout<<"������ ������� �: ";
	cin>>a;
	cout<<"������ ������� b: ";
	cin>>b;
	cout<<"��� �� ����: ";
	cin>>alpha;
	f(a,b,alpha);
	}
	system("pause"); 
	return 0;	
}
