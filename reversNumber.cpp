#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter A Number:"<<endl;
    cin>>n;
    int a;
   a=n;
    int r=0;
    while(n!=0){
        int ld=n%10;
        r*=10;
        r+=ld;
        n/=10;

    }
    cout<<r<<endl;
    cout<<"Sum Of Given Number And Revers Num Is :"<<a+r;
return 0;
}               