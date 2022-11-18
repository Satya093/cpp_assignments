#include<iostream>
using namespace std;

int main(){

    int num, temp, rem, sum=0;
    cout<<endl<<"enter a num"<<endl;
    cin>>num;

    for(temp=num; num!=0; num=num/10) {
        rem=num%10;
        sum=sum+(rem*rem*rem);
    }
    if(sum==temp){
        cout<<endl<<"num is armstrong"<<endl;
    }
    else{
        cout<<endl<<"not a armstrong no"<<endl;
    }

}