#include<iostream>
using namespace std;
int main(){
  int n,f=1;
    cout<<"Enter Number"<<endl;
    cin>>n;
    for( int i=1;i<n;i++){
        if(n%i==0){
            f=i;
        }
    }

        
        cout<<f<<endl;
return 0;
}   