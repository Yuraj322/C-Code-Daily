#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Number"<<endl;
    cin>>a;
    if(a%5==0 ||a%3==0){
        cout<<"Your number is Divisibal By 5 or 3";
    }
    else{
        cout<<"Your number is not Divisibal By 5 or 3";
        
    }
}