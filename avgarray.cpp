#include<iostream>
using namespace std;
float average(float a[], float size)
{
    float sum=0,avg;
    int i;
    for(i=0;i<size;i++){
        sum+=a[i];
        avg=sum/size;
    }
    return avg;
}
int main(){
    int size,j;
    cout<<"enter the size of an array"<<endl;
    cin>>size;
    float a[size],b;
    for(j=0;j<size;j++){
       cout<<"enter the array element"<<endl;
       cin>>a[j];
    }
    b=average(a,size);
    cout<<"average is"<<b<<endl;
return 0;
}