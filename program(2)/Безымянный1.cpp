#include <iostream>
#include <math.h>
#include <conio.h>

/*
d1 = va2 + b2 + 2ab�cos?

d2 = va2 + b2 - 2ab�cos?
*/
using namespace std;

double f(double a,double b,double alpha) //�-��� ��� �����. 1 �������
{
	return sqrt(a*a+b*b+2*a*b*cos(alpha));
}
double f2(double a,double b,double alpha) //�-��� ��� �����. 2 �������
{
	return sqrt(a*a+b*b-2*a*b*cos(alpha));
}
int main()
{
	setlocale(LC_CTYPE, "ukr");
	for(int i=1; i<4; i++)
	{
	double a,b,d1,d2,alpha;
	cout<<"������ ������� �: ";
	cin>>a;
	cout<<"������ ������� b: ";
	cin>>b;
	cout<<"��� �� ����: ";
	cin>>alpha;
	cout<<i<<")\n";
	cout<<"������� �: "<<a<<"\n������� b: "<<b<<"\n��� �� ����: "<<alpha<<endl;
	cout<<"��� ����� ������� �����\n";
	cout<<"�������� ������� d1 ���� : "<<f(a,b,alpha)<<endl;
	cout<<"�������� ������� d2 ���� : "<<f2(a,b,alpha)<<endl;
	cout<<"-----------------------------------------------------\n";
	}
	system("pause"); 
	return 0;	
}
