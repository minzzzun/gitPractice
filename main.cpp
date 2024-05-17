#include <iostream>
#include <string>
#include "uppercase.h"
#include "reverse.h"
using namespace std;
int main() {
    string text = "Hello, World!";
    string upperText = toUpperCase(text);
    cout << "Upper case: " << upperText << endl;
    string reversedText = reverseString(text);
    cout << "Reversed: " << reversedText << endl;
    cout << "dkdjlfsfs" << endl;
    return 0;
}