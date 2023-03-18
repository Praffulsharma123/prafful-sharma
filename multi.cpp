#include<iostream>
using namespace std;
int main()
{ int a=10;
int *p;
p=&a;
cout<<"value of a is"<<a<<endl;
cout<<"value of p is"<<p<<endl;
cout<<"value of *p is"<<*p<<endl;
cout<<"value of *&a is"<<*&a<<endl;
return 0;
}