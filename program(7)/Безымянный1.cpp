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
			cout << "������ �����: ";
		    
		    gets(string);
		    strcpy(string2,string);
		    cout <<"����������� �����: "<<endl;
		    cout <<string<<endl; 
		    cout <<"����������� �����: "<<endl;
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
