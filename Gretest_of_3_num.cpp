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
if(a>b&&a>c){
    cout<<a<<"  Is Gretest"<<endl;
}
 else if(b>a&&b>c){
    cout<<b<<"  Is Gretest"<<endl;
}
else{
    cout<<c<<" Is Gretest"<<endl;

}

return 0;
}