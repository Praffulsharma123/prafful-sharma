#include<iostream>
using namespace std;
int factorial(int a){
    if(a==0 || a==1){
        return 1;
    }
    else{
    return a*factorial(a-1);
}}
int main(){
    int fact,b;
    cout<<"enter the number";
    cin>>b;
    fact=factorial(b);
cout<<"factorial of"<<b<<"is/n"<<fact<<endl;
}
