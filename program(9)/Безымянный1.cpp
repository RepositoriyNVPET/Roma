#include <iostream>
#include <conio.h>
using namespace std;
class Water                    //���� �������� �����
{
  public:
     int x, y,Ro_;
  public:
     Water(int Ro=5)  //����������� �������� �����
     {
       Ro_=Ro;
     }
     ~Water(){}
};
	class Sea : public  Water  //���� ������� ��������� �����
{
  protected:
     float M;
  public:
     Sea(int S=5, int h=10)   
     {
       x=S;
       y=h;
     }
     void Mass()               //���� ������ ������� ��������� �����
     {  float V;
      	V = x*y;
      	M=Ro_*V;
        cout<<"��������� �����: "<<V<<" ��."<<endl;
     }
     ~Sea() {}          //���������� ������� ��������� �����
};


class River : public  Water  //���� ������� ��������� 
                                       //�����
{
  protected:
     float s;
  public:
     River(int l=5, int v=10)     //����������� ������� 
                                       //��������� �����
     {
       x=l;
       y=v;
     }

     void dislocation()            //���� ������ ������� ��������� �����
     {	int t=60;
		  s=y*t;
		  cout<<"������� ���: "<<s<<" �.";
     }
     ~River() {}          //���������� ������� ��������� �����
};

int main()   //������� ��������
{
	setlocale(0,"");
  int Ro,S,h,l,v;  //���� ��������

  //�������� ������
  cout<<"������� ����: ";
  cin >> Ro;

  cout<<"����� �������: ";
  cin >> S;
  
  cout<<"������ �������� �������: ";
  cin >> h;

  cout<<"������� ����: ";
  cin >> l;
  
  cout<<"������� ��. �����: ";
  cin >> v;

  Water Z(Ro);   //��������� ��'���� �������� �����
  Z.~Water();  //������ ����������� ��� ��'���� �������� �����

  Sea W(S,h);  //��������� ��'���� ������� ���������  �����
  W.Mass();             
  W.~Sea();      //������ ����������� ��� ��'���� ������� 
                        

  River R(l, v);   //��������� ��'���� ������� ��������� 
  R.dislocation();        
  R.~River();      //������ ����������� ��� ��'���� ������� 
												
  getch();              //���������� ������������ ������          

  return 0;
}
