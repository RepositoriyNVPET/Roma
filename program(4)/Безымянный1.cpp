#include "iostream"
#include "math.h"
using namespace std;
int main(){
setlocale(0,"");	
	while(true) {
	int action;
		cout<<"1 � ����"<<endl;
		cout<<"2 � ҳ����"<<endl;
		cout<<"3 � ��������"<<endl;
		cout<<"4 - ���"<<endl;
		cout<<"5 � ���"<<endl;
		cout<<"6 � ĳ��"<<endl;
		cout<<"7 � ������"<<endl;
		cout<<"8 � �������"<<endl;
		cout<<"9 � �쳺������"<<endl;
		cout<<"10 � �������"<<endl;
		cout<<"11 � �������"<<endl;
		cout<<"12 � ������"<<endl;
		cout<<"13 � ����"<<endl;
		cout<<"-1. EXIT"<<endl;
		cout<<"������ ��� ���� ������: "<<endl;
		cin>>action;
			/*(1 � ����, 2 � ҳ����, 3 � ��������, 
			4 � ���, 5 � ���, 6 � ĳ��, 7 � ������, 8 � �������, 
			9 � �쳺������, 10 � �������, 11 � �������, 12 � ������, 13 � ����*/
			
		switch(action) {
			case 1:
				cout<<"������ �����"<<endl;
				break;
			case 2:
				cout<<"������ ����"<<endl;
				break;
			case 3:
				cout<<"������ ������"<<endl;
				break;
			case 4:
				cout<<"������ ����"<<endl;
				break;
			case 5:
				cout<<"������ �����"<<endl;
				break;
			case 6:
				cout<<"������ ����"<<endl;
				break;
			case 7:
				cout<<"������ ������"<<endl;
				break;
			case 8:
				cout<<"������ ����"<<endl;
				break;
			case 9:
				cout<<"������ �����"<<endl;
				break;
			case 10:
				cout<<"������ �����"<<endl;
				break;
			case 11:
				cout<<"������ ����"<<endl;
				break;
			case 12:
				cout<<"������ ������"<<endl;
				break;
			case 13:
				cout<<"������ ����"<<endl;
				break;
			case -1:
				return 0;
			}
			if(action == 0) {
				break;
			}
}}
