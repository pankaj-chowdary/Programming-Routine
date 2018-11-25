#include<iostream>
using namespace std;

int main()
{
	int a = 013;  // outputs 11 not 13 because , zero at the beginging of the decimal makes it octal number i.e base 8
	int b = 0x13; // it will become hexadecimal and print 19
	cout << a <<"  "<<b;
	
//	char * string = "pankaj";
//	printf("%s",string);
//	cout<<string;
	
	
}
