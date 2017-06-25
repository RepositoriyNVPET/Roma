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
//Ввід елементів з клавіатури 
int kol=4; 
int i; 
cout<< "Введiть пункт призначення рейсу:"<<endl 
<< "Введiть номер рейсу: "<<endl 
<< "Введiть тип лiтака: "<<endl; 

for (i=0; i<kol; i++) { 
cout << i+1 <<"-ий маршрут:" << endl; 
cin>> tr[i].city >> tr[i].num >> tr[i].type; 
} 
//сортування 
int temp; 
for(i = 0;i < kol-1; i++){ 
if(tr[i].num > tr[i+i].num) { temp = tr[i].num; tr[i].num = tr[i+1].num; tr[i+1].num = temp;continue;} 
} 

//вивід 
cout << endl << "Вiдсортований масив: " << endl; 
for (i=0; i<kol; i++) { 
cout << tr[i].city <<" " << tr[i].num << " " << tr[i].type; 
cout << endl; 
} 

//пошук рейсу по назві 
while (true) { 
char vv [21]; 
cout << endl << "Введiть назву пункта призначення" << endl; 
cin >> vv; 
bool f = false; 
for (i=0; i<kol; i++) 
if (strcmp (tr[i].city, vv)==0) { 
cout << "Номер рейсу:" <<' '<< tr[i].num <<' '<< "Тип лiтака:" <<' '<< tr[i].type << ' '<<endl; 
f = true; 
} 
if (!f) cout << "Нема такого пункту призначення"; 
} 
return 0; 
}
