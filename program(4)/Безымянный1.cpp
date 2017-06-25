#include "iostream"
#include "math.h"
using namespace std;
int main(){
setlocale(0,"");	
	while(true) {
	int action;
		cout<<"1 – Овен"<<endl;
		cout<<"2 – Тілець"<<endl;
		cout<<"3 – Близнюки"<<endl;
		cout<<"4 - Рак"<<endl;
		cout<<"5 – Лев"<<endl;
		cout<<"6 – Діва"<<endl;
		cout<<"7 – Терези"<<endl;
		cout<<"8 – Скорпіон"<<endl;
		cout<<"9 – Змієносець"<<endl;
		cout<<"10 – Стрілець"<<endl;
		cout<<"11 – Козерог"<<endl;
		cout<<"12 – Водолій"<<endl;
		cout<<"13 – Риба"<<endl;
		cout<<"-1. EXIT"<<endl;
		cout<<"Оберіть ваш знак зодіаку: "<<endl;
		cin>>action;
			/*(1 – Овен, 2 – Тілець, 3 – Близнюки, 
			4 – Рак, 5 – Лев, 6 – Діва, 7 – Терези, 8 – Скорпіон, 
			9 – Змієносець, 10 – Стрілець, 11 – Козерог, 12 – Водолій, 13 – Риба*/
			
		switch(action) {
			case 1:
				cout<<"Стихія вогню"<<endl;
				break;
			case 2:
				cout<<"Стихія землі"<<endl;
				break;
			case 3:
				cout<<"Стихія повітря"<<endl;
				break;
			case 4:
				cout<<"Стихія води"<<endl;
				break;
			case 5:
				cout<<"Стихія вогню"<<endl;
				break;
			case 6:
				cout<<"Стихія землі"<<endl;
				break;
			case 7:
				cout<<"Стихія повітря"<<endl;
				break;
			case 8:
				cout<<"Стихія води"<<endl;
				break;
			case 9:
				cout<<"Стихія вогню"<<endl;
				break;
			case 10:
				cout<<"Стихія вогню"<<endl;
				break;
			case 11:
				cout<<"Стихія землі"<<endl;
				break;
			case 12:
				cout<<"Стихія повітря"<<endl;
				break;
			case 13:
				cout<<"Стихія води"<<endl;
				break;
			case -1:
				return 0;
			}
			if(action == 0) {
				break;
			}
}}
