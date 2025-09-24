#include <iostream>
using namespace std;

int main() {
     // Floating-point to integer conversion (explicit type casting)
    float x = 10.5;
    int y = int(x); // Converts 10.5 to 10, discards decimal part

    cout << "Value of x: " << x << endl; // Outputs: 10.5
    cout << "Value of y: " << y << endl; // Outputs: 10

    // Boolean and integer addition
    bool e = false; // false = 0
    cout << "false + 7 = " << (e + 7) << endl; // Outputs: 0 + 7 = 7

    bool t = true; // true = 1
    cout << "true + 7 = " << (t + 7) << endl; // Outputs: 1 + 7 = 8

    // Type casting boolean to int
    bool z = true;
    int i = int(z); // Converts true to 1
    cout << "int(true) + 7 = " << (i + 7) << endl; // Outputs: 1 + 7 = 8

    // Character arithmetic (C++ allows it; Java does not support implicit char arithmetic in the same way)
    char ch = 'A'; // ASCII value of 'A' is 65
    cout << "'A' + 7 = " << (ch + 7) << endl; // Outputs: 65 + 7 = 72

    // Displaying ASCII value of the result explicitly
    cout << "ASCII value after adding: " << int(ch + 7) << endl; // Outputs: 72

    // Finding position of character 'H' in alphabet (A=1, B=2, ..., H=8)
    char findValueAscii = 'H'; // ASCII of 'H' is 72
    int value = int(findValueAscii); // Explicit type casting to get ASCII
    cout << "'H' position in alphabet = " << (value - 64) << endl; // 72 - 64 = 8

}
