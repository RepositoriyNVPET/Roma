#include <stdio.h>
#include <math.h> 
#include <iostream>
using namespace std;
//���������� �����
 class integer
{
  private: 
  int g; 
   public: 

	int Get_g() {return g;}

	//���� ������� ���� �������
	void Set_g(float _g) {g=_g;} 

	
	int N();
	void InputData(); 
	void OutputData();
};
int integer::N()
{
    int j;
    bool isprime;

        isprime=true;
        for (j=2;j<=g/2;j++)
        if ((g%j)==0)
        isprime=false;
        if (isprime)
        cout <<"����� "<<g<<" ������ ";
        else cout<<"����� "<<g<<" ��������";
}


//���� ������� �������� �������
void integer::InputData() 
{ 
  float side; 
	printf("������ �����: : ");
	scanf("%f", &side); Set_g(side);

} 
void integer::OutputData()
{

	cout<<Get_g()<<endl;;
}
int NOD(int x, int y)
{
    if (x != 0)
        return NOD(y%x,x);
    else
        return y;
}
 
int NOK(int x, int y)
{
    return (x/NOD(x,y))*y;
}
	 //����� ������� ������� 
	 int main() 
{ setlocale(0,"");
	integer int1;
	integer int2; 
	int1.InputData(); 
	printf("\n",int1.N()); 

	int2.InputData();
	printf("\n",int2.N());

		cout<<"������ �����: ";
	int1.OutputData();
	int2.OutputData();
	int x,y;
	cout<<"������ ����� ��� ��������: ";
    cin>>x>>y;
    cout<<"��� = "<<NOD(x,y)<<endl;
    cout<<"��� = "<<NOK(x,y)<<endl;
	
	system("pause");
} 
 
