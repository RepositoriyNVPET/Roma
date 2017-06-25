#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
 
using namespace std;

int main()
{   
	float S, a, h;
	setlocale(LC_CTYPE, "ukr");
	cout<<"Vvedit storony trukytnuka:";
	cin>>a;
	h=a*2;
	S=0.5*a*h;
	cout<<"Âèñîòà òðèêóòíèêà: "<<h<<" îä.\n";
	cout<<"Ïëîùà òðèêóòíèêà: ";
	printf("%.2f", S);
	cout<<" êâ. îä.";
	return 0;
	getch();
}
