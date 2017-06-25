#include <stdio.h>
#include <math.h> 
#include <iostream>
using namespace std;
//оголошення класу
 class integer
{
  private: 
  int g; 
   public: 

	int Get_g() {return g;}

	//опис функцій зміни значень
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
        cout <<"Число "<<g<<" просте ";
        else cout<<"Число "<<g<<" складене";
}


//опис функції введення значень
void integer::InputData() 
{ 
  float side; 
	printf("Введіть число: : ");
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
	 //текст головної функції 
	 int main() 
{ setlocale(0,"");
	integer int1;
	integer int2; 
	int1.InputData(); 
	printf("\n",int1.N()); 

	int2.InputData();
	printf("\n",int2.N());

		cout<<"Введені числа: ";
	int1.OutputData();
	int2.OutputData();
	int x,y;
	cout<<"Введіть числа для перевірки: ";
    cin>>x>>y;
    cout<<"НСД = "<<NOD(x,y)<<endl;
    cout<<"НСК = "<<NOK(x,y)<<endl;
	
	system("pause");
} 
 
