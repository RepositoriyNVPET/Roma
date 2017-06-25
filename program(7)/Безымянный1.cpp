#include <cstring>
#include <iostream>
using namespace std;

 class String
{
	public:
		char string[255];
		    char string2[255];
		char copy()
		{
			cout << "Введіть рядок: ";
		    
		    gets(string);
		    strcpy(string2,string);
		    cout <<"Оригінальний рядок: "<<endl;
		    cout <<string<<endl; 
		    cout <<"Скопійований рядок: "<<endl;
		    cout <<string2<<endl; 
		}
}; 

	int main() 
{ setlocale(0,"");
	String obj1; 
	obj1.copy();
		printf("----------------------\n");
	system("pause");
}
