#include<iostream>
using namespace std;

int main()
{
	const char * p = new char[1024];
	p="pankaj";
	while(*p!='\0')
	{
		cout<<*p;
		p++;
	}
}
