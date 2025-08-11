#include <iostream>
using namespace std;
// Take integer 'X' as input and print half of the number.
int main()
{
    int a;
    cout << "Enter number for half" << endl;
    cin >> a;
    float y = (float)a; // Typecasting
    cout << "Your number half is:" << y / 2 << endl;
    return 0;
}