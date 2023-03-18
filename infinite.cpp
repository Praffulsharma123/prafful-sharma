#include<iostream>
using namespace std;
int main(){
int h,i,j;
cout<<"enter the height of traingle"<<endl;
cin>>h;
for(i=h;i>=1;i--){
    for(j=1;j<=i;j++){
        cout<<"#";
    }
    cout<<endl;
}
}

