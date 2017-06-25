#include <fstream>
using namespace std;

void ReadWrite(	char *fname1, char *fname2)
{
	ifstream f1(fname1);
    ofstream f2(fname2);
    f2 << f1.rdbuf();
 /*	string string;
    f1>>string;
    f2 << string; 
*/	 
}
int main(int argc, char* argv[])
{	
	char *fname1,*fname2;
	fname1="infile.txt";
	fname2="outfile.txt";
	ReadWrite(fname1, fname2);
    system("pause");
    return 0;
}
