#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"Enter Your cost price"<<endl;
    cin>>cp;
    cout<<"Enter Your Selling price"<<endl;
    cin>>sp;
    if(sp>cp){
        cout<<"You Have Profit "<<sp-cp <<" Rupprs"<<endl;
    }
     else if(sp<cp){
        cout<<"You Have Loss "<< cp-sp<<"Ruppes"<<endl;
    }

   else {

        cout<<"No profit No Loss"<<endl;

    }
}