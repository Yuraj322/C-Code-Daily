#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Your Number To check if number is Greter than 99 and less than 1000\n";
    cin>>a;
    if(a>99  &&  a<1000){// You use "and" in case of &&
         cout<<" Your Number  is Greter than 99 and less than 1000" ;
    }
    else{
        cout<<"Not three digit number";
    }
}