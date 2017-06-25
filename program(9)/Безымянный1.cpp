#include <iostream>
#include <conio.h>
using namespace std;
class Water                    //опис базового класу
{
  public:
     int x, y,Ro_;
  public:
     Water(int Ro=5)  //конструктор базового класу
     {
       Ro_=Ro;
     }
     ~Water(){}
};
	class Sea : public  Water  //опис першого похідного класу
{
  protected:
     float M;
  public:
     Sea(int S=5, int h=10)   
     {
       x=S;
       y=h;
     }
     void Mass()               //опис методу першого похідного класу
     {  float V;
      	V = x*y;
      	M=Ro_*V;
        cout<<"Наближена масса: "<<V<<" кг."<<endl;
     }
     ~Sea() {}          //деструктор першого похідного класу
};


class River : public  Water  //опис другого похідного 
                                       //класу
{
  protected:
     float s;
  public:
     River(int l=5, int v=10)     //конструктор другого 
                                       //похідного класу
     {
       x=l;
       y=v;
     }

     void dislocation()            //опис методу другого похідного класу
     {	int t=60;
		  s=y*t;
		  cout<<"Зміщення тіла: "<<s<<" м.";
     }
     ~River() {}          //деструктор другого похідного класу
};

int main()   //основна програма
{
	setlocale(0,"");
  int Ro,S,h,l,v;  //змінні програми

  //введення змінних
  cout<<"Густина води: ";
  cin >> Ro;

  cout<<"Площа поверхні: ";
  cin >> S;
  
  cout<<"Середнє значення глибини: ";
  cin >> h;

  cout<<"Довжина річки: ";
  cin >> l;
  
  cout<<"Середня шв. течії: ";
  cin >> v;

  Water Z(Ro);   //створення об'єкта базового класу
  Z.~Water();  //виклик деструктора для об'єкта базового класу

  Sea W(S,h);  //створення об'єкта першого похідного  класу
  W.Mass();             
  W.~Sea();      //виклик деструктора для об'єкта першого 
                        

  River R(l, v);   //створення об'єкта другого похідного 
  R.dislocation();        
  R.~River();      //виклик деструктора для об'єкта другого 
												
  getch();              //очікування натискування клавіші          

  return 0;
}
