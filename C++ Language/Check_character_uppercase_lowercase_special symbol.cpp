#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
        cout << ch << " is an uppercase letter.";
    else if (ch >= 'a' && ch <= 'z')
        cout << ch << " is a lowercase letter.";
    else if (ch >= '0' && ch <= '9')
        cout << ch << " is a digit.";
    else
        cout << ch << " is a special symbol.";

     return 0;
    }
