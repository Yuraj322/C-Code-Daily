#include <iostream>
using namespace std;

int main() {
    for (int asciiValue = 65; asciiValue <= 90; asciiValue++) { // Loop from ASCII 'A' to 'Z'
        cout << "Character: " << char(asciiValue) << ", ASCII Value: " << asciiValue << endl;
    }

    return 0;
}
