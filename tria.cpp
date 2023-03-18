#include<iostream>
using namespace std;
int main()
{
int h,i,j;
cout<<"enter the height"<<endl;
cin>>h;
for(i=1;i<=h;i++)//no.of lines equal to height
{
    for(j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}
}