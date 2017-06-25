#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
 
using namespace std;

int main()
{   
	int kop,grn;
	setlocale(LC_CTYPE, "ukr");
	cout<<"гривні: ";
	cin>>grn;
	cout<<"копійки: ";
	cin>>kop;
	cout<<"ціна: "<<grn<<" гривень "<<kop<<" копійок";
	getch();
}
