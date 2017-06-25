#include "iostream"
#include "math.h"
using namespace std;

void inputInformation(int el);
void outputInformation(int el);
void outputSV(int el);

struct Data {
	int W, H, R, L;
}first, second;

int main() 
{
	setlocale(0,"");
	int elem;
	while(true) {
		cout<<"0 - ������ �������: "<<endl;
		cout<<"1 - ������ �������: "<<endl;
		cout<<"-1 - EXIT"<<endl;
		cin>>elem;
		if(elem == -1) return 0;
		if(elem > 1 || elem < 0) {
			continue;
		}
		while(true) {
			int action;
			cout<<"1. �������� ���."<<endl;
			cout<<"2. ��������� ���."<<endl;
			cout<<"3. ��������� S �� V"<<endl;
			cout<<"-1. EXIT"<<endl;
			cin>>action;
			
			switch(action) {
				case 1:
					if(elem == 0) inputInformation(1);
					else inputInformation(2);
					break;
				case 2:
					if(elem == 0) outputInformation(1);
					else outputInformation(2);
					break;
				case 3:
					if(elem == 0) outputSV(1);
					else outputSV(2);
					break;
				case -1:
					return 0;
			}
			if(action == 0) {
				break;
			}
		}
	}
}

void inputInformation(int el) {
	cout<<"�������� ����������: "<<endl;
	if(el == 1) {
		cout<<"W = "; cin>>first.W;
		cout<<"H = "; cin>>first.H;
		cout<<"R = "; cin>>first.R;
		cout<<"L = "; cin>>first.L;
	}else if(el == 2){
		cout<<"W = "; cin>>second.W;
		cout<<"H = "; cin>>second.H;
		cout<<"R = "; cin>>second.R;
		cout<<"L = "; cin>>second.L;
	}
	cout<<endl;
}

void outputInformation(int el) {
	cout<<"��������� ����������"<<endl;
	if(el == 1) {
		cout<<"W = "<<first.W<<endl;
		cout<<"H = "<<first.H<<endl;
		cout<<"R = "<<first.R<<endl;
		cout<<"L = "<<first.L<<endl;
	}else if(el == 2){
		cout<<"W = "<<second.W<<endl;
		cout<<"H = "<<second.H<<endl;
		cout<<"R = "<<second.R<<endl;
		cout<<"L = "<<second.L<<endl;
	}
	cout<<endl;
}

void outputSV(int el) {
		/*
	V = So h         S=1/2*a*h     
	*/
		cout<<"��������� ����� �� ��'���: "<<endl;
	if(el == 1) {
		float S = (first.W * first.H) + (first.L * first.H) + (0.5 * first.R * first.W) + ((pow(first.R, 2) + pow(first.W / 2, 2)) * first.L);
		cout<<"S = "<<S<<" ��.��."<<endl;
		float V=((0.5*first.W*first.R)*(first.L))+(first.W*first.H*first.L);
		cout<<"V = "<<V<<" ���.��."<<endl;
	}else if(el == 2) {
		int S = (second.W * second.H) + (second.L * second.H) + (0.5 * second.R * second.W) + ((pow(second.R, 2) + pow(second.W / 2, 2)) * second.L);
		cout<<"S = "<<S<<" ��.��."<<endl;
		float V=((0.5*second.W*second.R)*(second.L))+(second.W*second.H*second.L);
		cout<<"V = "<<V<<" ���.��."<<endl;
	}
	cout<<endl;
}
