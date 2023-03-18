#include<iostream>
using namespace std;
int main()
{
    int choice=1;
    while(choice==1)
    {
        int a;
        cout<<"enter the no. you want to check is even or odd"<<endl;
        cin>>a;
        if(a%2==0){
          cout<<"no. is even"<<endl;
        }
        else{
            cout<<"no. is odd"<<endl;
        }
        cout<<"you want to check another no. then enter 1 otherwise enter 0"<<endl;
          cin>>choice;
    }
    cout<<"we think you have checked all the numbers"<<endl;

return 0;

}