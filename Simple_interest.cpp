#include<iostream>
using namespace std;
int main(){
double r,a,s;
    cout<<"Enter rate of interest"<<endl;
    cin>>r;
    cout<<"Enter duration of interest"<<endl;
    cin>>s;
    cout<<"Enter Amount of interest"<<endl;
    cin>>a;
    cout<<"Your Simple interst is:"<<(r*s*a)/100;
    return 0;
    
}