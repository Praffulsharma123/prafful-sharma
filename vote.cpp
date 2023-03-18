#include<iostream>
using namespace std;
// {int a,b;
//     cout<<"enter the age of voter"<<endl;
// cin>>a;
// b=voter(a);
// return b;

int voter(int a){
    if(a>=18){
        cout<<"you are eligible"<<endl;
    }
    else
    cout<<"you are not eligible"<<endl;
    return 0;
}
int main()
{int a,b;
    cout<<"enter the age of voter"<<endl;
cin>>a;
b= voter(a);
return 0;
}