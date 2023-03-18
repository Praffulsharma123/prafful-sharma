#include<iostream>
using namespace std;
int func(int a)
{
    if(a%2==0){
        cout<<"no. is even"<<endl;
    }
    else{
    cout<<"no. is odd"<<endl;
}return 0;
}
int main(){
    int a,b;
    cout<<"enter the number"<<endl;
    cin>>a;
    b=func(a);
    return b;
}