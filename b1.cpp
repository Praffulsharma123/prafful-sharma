#include<iostream>
using namespace std;
int maxima(int a,int b,int c){
    if(a>b && a>c){
        cout<<"maximum number is"<<a<<endl;
    }
    else if(b>a && b>c){
        cout<<"maximum no. is"<<b<<endl;
    }
    else return c; 
    return 0;
}
int main(){
    int a,b,c;
    cout<<"enter three no."<<endl;
    cin>>a>>b>>c;
    cout<<maxima(a,b,c);
    return 0;
}