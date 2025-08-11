#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter your number to verify Even or Odd"<<endl;
    cin>>a;
    // if(a%2==0) cout<<"Your Number:-"<<a<<"is Even Number"<<endl;
    // else  cout<<"Your Number:-"<<a<<" is Odd Number"<<endl;
    
    (a%2==0) ? cout<<"Even":cout<<"Odd";

}