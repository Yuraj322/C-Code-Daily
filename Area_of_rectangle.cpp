#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter Length"<<endl;
    cin>>l;
    cout<<"Enter Breath"<<endl;
    cin>>b;
    int a;
    a=l*b;
    int p;
    p=2*(l+b);
    if(a>p){
        cout<<"Area of Rectangle is greture than perimeter";
    }
    else{
        cout<<"Area of Rectangle is Lesses than perimeter";
    }
}
