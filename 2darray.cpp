#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5>a{{1,5,4,6,8}};
    cout<<a[3]<<endl;
    for(int i:a){
    cout<<i<<endl;}
    return 0;
}