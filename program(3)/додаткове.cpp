#include <iostream> 
#include <string.h> 
#include <stdlib.h> 
using namespace std; 


struct aeroflot { 
char city[15]; 
int num; 
char type[6]; 
}; 
int main() { 
setlocale(LC_ALL, "ukr"); 
aeroflot tr[4]; 
//��� �������� � ��������� 
int kol=4; 
int i; 
cout<< "����i�� ����� ����������� �����:"<<endl 
<< "����i�� ����� �����: "<<endl 
<< "����i�� ��� �i����: "<<endl; 

for (i=0; i<kol; i++) { 
cout << i+1 <<"-�� �������:" << endl; 
cin>> tr[i].city >> tr[i].num >> tr[i].type; 
} 
//���������� 
int temp; 
for(i = 0;i < kol-1; i++){ 
if(tr[i].num > tr[i+i].num) { temp = tr[i].num; tr[i].num = tr[i+1].num; tr[i+1].num = temp;continue;} 
} 

//���� 
cout << endl << "�i����������� �����: " << endl; 
for (i=0; i<kol; i++) { 
cout << tr[i].city <<" " << tr[i].num << " " << tr[i].type; 
cout << endl; 
} 

//����� ����� �� ���� 
while (true) { 
char vv [21]; 
cout << endl << "����i�� ����� ������ �����������" << endl; 
cin >> vv; 
bool f = false; 
for (i=0; i<kol; i++) 
if (strcmp (tr[i].city, vv)==0) { 
cout << "����� �����:" <<' '<< tr[i].num <<' '<< "��� �i����:" <<' '<< tr[i].type << ' '<<endl; 
f = true; 
} 
if (!f) cout << "���� ������ ������ �����������"; 
} 
return 0; 
}
