#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter The negative number to get positive number" << endl;
    cin >> a;
    // Type 1
    //     if(a>=0){
    //         cout<<"Your number is positive "<<a<<endl;
    //     }
    //     else{
    //         cout<<"Converting Your Number to Positive  "<<-a<<endl;
    //     }
    // Type 2

    // if(a>=0)cout<<a;
    // else cout<<-a;
    // Type 3
    // if you wqnt to change a into its absolute value
    if (a < 0)
        a = -a;
    cout << a;
}