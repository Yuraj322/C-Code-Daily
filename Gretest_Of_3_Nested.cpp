#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter Three Number"<<endl;
    cout<<"Enter 1 Number"<<endl;
    cin>>a;
    cout<<"Enter 2 Number"<<endl;
    cin>>b;
    cout<<"Enter 3 Number"<<endl;
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"Greter is "<<a<<endl;
        }
        else{
            cout<<"Greter is "<<c<<endl;
        }
    }
    else{
        if(b>c){
        cout<<"Greter is "<<b<<endl;
    }
    else{
        cout<<"Greter is "<<c<<endl;
    }
    }
return 0;
}