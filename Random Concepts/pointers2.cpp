#include<iostream>
using namespace std;

int main() {
    // allocate a place of 1024 character in memory
    // and let p points to that place
    char *p = new char[1024];      

    // call cin to read input from the user and save
    // it in memory at the location pointed to by p
    // NOTE: cin would put an extra NULL character 
    // at the end to terminate the string
  //  cin >> p;                      //forexample: haha
    p="pankaj";
    // Now p would be pointing to a piece of memory like this
    // [h] [a] [h] [a] [\0]

    // use the value at operator to de-reference the pointer
    // p, the result would be a single character which 
    // will be the first character in memory p is pointing at
    char q = *p;

    // printing the value of (the address of q)
    // Note you have a problem here as cout will
    // be handling the memory starting at the address 
    // of q as a string while it is not, so you
    // will get a string starting with "h" and followed
    // by whatever is there in memory by the time of execution
    cout << "&q = " << &q << endl;

    // printing the value of the character q
    while(*p!='\0')
    {
     q=*p;
     cout <<q; 
     p++;
    }
    return 0;
}
