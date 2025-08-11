#include<iostream>
using namespace std;
int main(){
    float a,b;
    
    cout<<"Enter First Number For All Operation"<<endl;
    cin>>a;
    cout<<"Enter Second Number For All Operation"<<endl;
    cin>>b;
    float c,s,d,m;
     c=a+b;
    cout<<"Addition of Two Number is:"<<c<<endl;
     s=a-b;
    cout<<"Sum of Two Number is:"<<s<<endl;
     m=a*b;
    cout<<"Multi of Two Number is:"<<m<<endl;
    d=a/b;
    cout<<"Divi of Two Number is:"<<d<<endl;
    // float l=a%b;
    // cout<<"modula of Two Number is:"<<l<<endl;
    // This Give error
    // Modulus operation with integers
    int x = static_cast<int>(a);
    int y = static_cast<int>(b);
    int l = x % y;
    cout << "Modulus of Two Number is: " << l << endl;
//a%b=a
//a%a=0
//a%(-b)=a%b
//(-a)%b=-[a%b]
return 0;
}