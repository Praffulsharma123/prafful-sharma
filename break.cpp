#include<iostream>
using namespace std;
int main(){
    int a;
for(a=1;a<=10;a++){
    cout<<a<<endl;
    if(a==5){
        a=a+1;
        
        continue;
    }
}
}