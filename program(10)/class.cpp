#include <stdio.h>
#include <math.h> 
#include <iostream>
 
//���������� �����
 class Gravity
{
  private: 
  float v0, alpha, g, t; 
   public: 
    float Get_v0() {return v0;}
	float Get_alpha() {return alpha;} 
	float Get_g() {return g;} //���� ������� ���� �������
	void Set_v0(float _v0) {v0=_v0;} 
	void Set_alpha(float _alpha) {alpha=_alpha;} 
	void Set_g(float _g) {g=_g;} 
	
	float X();
	float Y();
	float MaxT(); 
	float MaxH(); 
	float MaxL();
	void InputData(); 
}; 
float Gravity::MaxH()
{ 
  return ((v0*v0*pow(sin(alpha),2))/(2*g));
} 
float Gravity::MaxL()
{ 
  return ((v0*v0*sin(2*alpha))/g);
} 
float Gravity::MaxT()
{ 
  return t=((2*v0*sin(alpha))/g);
} 
float Gravity::X()
{
	float vx=v0*cos(alpha);
	return	vx*t;
}
float Gravity::Y()
{
	float vy=v0*sin(alpha)-g*t;	
	return (v0*t)-(g*t*t)/2;
}
//���� ������� �������� �������
  void Gravity::InputData() 
{ 
  float side; 
  printf("������ ��������� ��������: ");
   scanf("%f", &side); Set_v0(side);
    printf("������ ���: "); 
	scanf("%f", &side); Set_alpha(side); 
	printf("������ �����������: ");
	 scanf("%f", &side); Set_g(side);
} 
	 //����� ������� ������� 
	 int main() 
{ setlocale(0,"");
	Gravity obj1;
	Gravity obj2; 
	obj1.InputData(); //�������� ������ ����� ���������� 
	printf("ҳ�� ������ � ����������� %.2f, %.2f, %.2f\n�� ������ ������� %.2f �. �� �������� ������� %.2f �.\n��� ������� �� ��� %.2f ���.\n", obj1.Get_v0(), obj1.Get_alpha(), obj1.Get_g(), obj1.MaxH(), obj1.MaxL(), obj1.MaxT()); 
		printf("���������� %.2f:%.2f\n",obj1.X(),obj1.Y());
		printf("----------------------\n");
	obj2.InputData(); //�������� ������ ����� ���������� 
	printf("ҳ�� ������ � ����������� %.2f, %.2f, %.2f\n�� ������ ������� %.2f �. �� �������� ������� %.2f �.\n��� ������� �� ��� %.2f ���.\n", obj2.Get_v0(), obj2.Get_alpha(), obj2.Get_g(), obj2.MaxH(), obj2.MaxL(), obj2.MaxT()); 
		printf("���������� %.2f:%.2f\n",obj2.X(),obj2.Y());
		printf("----------------------\n");
	system("pause");
} 
 
