#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
class Triangle{
public:
float a, b, c; 
public:
float Get_a() {return a;}
float Get_b() {return b;}
float Get_c() {return c;}

void Set_a(float _a) {a=_a;}
void Set_b(float _b) {b=_b;}
void Set_c(float _c) {c=_c;}


float GetPerimetr()
{
	return (a+b+c);
}
float GetHight()
{
return sqrt(a*b*(a+b+c)*(a+b-c))/(a+b);
}

float GetMedian()
{
	return sqrt(2*(b*b+c*c)-a*a)/2;
}

float GetSquare()
{
int	p=(a+b+c)/2;
return sqrt(p*(p-a)*(p-b)*(p-c));
}

float GetBisektrisa()
{
	return sqrt(a*b*(a+b+c)*(a+b-c))/(a+b);
}

void InputData() 
{
float side; 
printf("������ ������� ����� �������: "); scanf("%f", &side);
Set_a(side);
printf("������ ������� ����� �������: "); scanf("%f", &side);
Set_b(side);
printf("������ ������� ������ �������: "); scanf("%f", &side);
Set_c(side);
}
};

int main()
{
setlocale(LC_CTYPE, "ukr");
Triangle tr1;
Triangle tr2;
Triangle tr3;
printf("������ ���������: \n");
tr1.InputData();
printf("������ ���������: \n");
tr2.InputData();
printf("����� ���������: \n");
tr3.InputData();
printf("��������� � ��������� %.2f, %.2f, %.2f �� ����� %.2f\n", tr1.Get_a(), tr1.Get_b(), tr1.Get_c(), tr1.GetSquare());
printf("��������� � ��������� %.2f, %.2f, %.2f �� ����� %.2f\n", tr2.Get_a(), tr2.Get_b(), tr2.Get_c(), tr2.GetSquare());
printf("��������� � ��������� %.2f, %.2f, %.2f �� ����� %.2f\n", tr3.Get_a(), tr3.Get_b(), tr3.Get_c(), tr3.GetSquare());

//----------------------------------------------------------------
printf("--------------------------------------------------\n");
//��������� �������� �����
if((tr1.GetSquare()>tr2.GetSquare())&&(tr1.GetSquare()>tr3.GetSquare()))
{
printf("��������� �� ��������� ������ : %.2f\n", tr1.GetSquare());
}
else if((tr1.GetSquare()<tr2.GetSquare())&&(tr2.GetSquare()>tr3.GetSquare()))
{
printf("��������� �� ��������� ������ : %.2f\n", tr3.GetSquare());
}
else 
{
printf("��������� �� ��������� ������ : %.2f\n", tr3.GetSquare());
}
//------------------------------------------------------------------
printf("--------------------------------------------------\n");
//
if((tr1.GetPerimetr()<tr2.GetPerimetr())&&(tr1.GetPerimetr()<tr3.GetPerimetr()))
{
printf("��������� � ��������� ����������: %.2f\n �� ������� �����: %.2f\n ������: %.2f\n ���������: %.2f\n",
 tr1.GetPerimetr(), tr1.GetHight(), tr1.GetMedian(), tr1.GetBisektrisa());
}
else if((tr1.GetPerimetr()>tr2.GetPerimetr())&&(tr2.GetPerimetr()<tr3.GetPerimetr()))
{
printf("��������� � ��������� ����������: %.2f\n �� ������� �����: %.2f\n ������: %.2f\n ���������: %.2f\n",
 tr2.GetPerimetr(), tr2.GetHight(), tr2.GetMedian(), tr2.GetBisektrisa());
}
else 
{
printf("��������� � ��������� ����������: %.2f\n �� ������� �����: %.2f\n ������: %.2f\n ���������: %.2f\n",
 tr3.GetPerimetr(), tr3.GetHight(), tr3.GetMedian(), tr3.GetBisektrisa());
}
//--------------------------------------------------------------------
}

