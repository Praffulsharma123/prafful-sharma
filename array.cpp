#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,8,9,5};//array declaration
    int i,*p;
    p = a;
    cout<<"adress of first element"<<p<<endl;//adress of array
    for(i=0;i<5;i++){
cout<<"adress elmenet of array is"<<&a[i]<<endl;
    }
}