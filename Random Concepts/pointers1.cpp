#include<iostream>
using namespace std ;

void fun(int a[]) // can also do  fun(int a[]) 
{                
      cout<<"size of array is :" <<sizeof(a)/sizeof(a[1])<<"  ";

      for (int i = 0 ;i<10;i++)  // you can't do i<sizeof(a)/sizeof(*a) here because size is always 2  -all u can do is use vectors 
       { 
	   cout<<a[i]<<"  ";
       }
       cout <<"size of array is : "<<sizeof(a)/sizeof(*a)<<"  ";
}

int main ()
{
       int a[10] ={0};
       cout<<"size of the array is : "<<sizeof(a)/sizeof(*a)<<"  ";   //to find the size of the array you can also do sizeof(a)/sizeof(a[3];
      for (int i = 0 ;i<5;i++)
       {
       	a[i]=i;
	   cout<<a[i]<<"  ";
       }
       fun(a); // a is just a pointer that has the address of the first element of the array i.e address of a[0]
            // well that means we are not passing the whole array as the argument but just the array pointer a.

    return 0;
}
