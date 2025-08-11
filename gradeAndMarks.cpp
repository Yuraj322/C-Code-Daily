#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter Marks"<<endl;
cin>>a;
if(a>90){
    cout<<"Grade A"<<endl;}
 else if(a>80){
    cout<<"Grade B"<<endl;}
 else if(a>70){
    cout<<"Grade c"<<endl;}
 else if(a>60){
    cout<<"Grade d"<<endl;}
 else if(a<=50){
    cout<<"Fail"<<endl;}
return 0;
}