#include<iostream>
using namespace std;
int marks(int a){
        if(a>=91 && a<=100){
        cout<<"grade is AA"<<endl;
}
        else if(a>=81 && a<=90){
        cout<<"garde is AB"<<endl;
        }
        else if(a>=71 && a<=80){
        cout<<"grade is BB"<<endl;
        }
        else if(a>=61 && a<=70){
        cout<<"grade is BC"<<endl;
        }
        else if(a>=51 && a<=60){
        cout<<"grade is CD"<<endl;
        }
        else if(a>=41 && a<=50){
        cout<<"grade is DD"<<endl;
        }
        else if(a<=40){
        cout<<"fail"<<endl;
        }
    
    return 0;
}
int main(){
    int a;
    cout<<"enter the marks"<<endl;
    cin>>a;
    marks(a);
    return a;
}