#include <iostream>
using namespace std;
int main()
{
    int month;
    cout << "Enter Month Number Between 1-12" << endl;
    cin >> month;
    switch (month)
    {
    case 1:
        cout << "Jan" << endl;
        break;
    case 2:
        cout << "Feb" << endl;
        break;
    case 3:
        cout << " March" << endl;
        break;
    case 4:
        cout << "April" << endl;
        break;
    case 5:
        cout << "May" << endl;
        break;
    case 6:
        cout << "June" << endl;
        break;
    case 7:
        cout << "July" << endl;

        break;
    case 8:
        cout << "Aug" << endl;
        break;
    case 9:
        cout << "Sep" << endl;
        break;
    case 10:
        cout << "Oct" << endl;
        break;
    case 11:
        cout << "Nav" << endl;
        break;
    case 12:
        cout << "Dec" << endl;
        break;
    default:
        cout << "Enter Number in between 1-12 ";
        break;
    }
}