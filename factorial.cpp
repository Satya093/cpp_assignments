#include<iostream>
using namespace std;

int main(){
    int num, fac=1;

    cout<<endl<<"enter a no:"<<endl;
    cin>>num;

    while(num>=1){
        fac=fac*num;
        num=num-1;
    }
    cout<<endl<<"factorial of no is "<<fac;
    }
