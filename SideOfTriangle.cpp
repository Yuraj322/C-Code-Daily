#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter  1 side"<<endl;
    cin>>a;
    cout<<"Enter  2 side"<<endl;
    cin>>b;
    cout<<"Enter  3 side"<<endl;
    cin>>c;
    if((a+b)>c and (b+c)>a and (c+a)>b){
        cout<<"Valid Triangle";
    }
    else{
        cout<<"InValid Triangle";
        
    }
}