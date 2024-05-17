#include <iostream>
#include <string>
#include "uppercase.h"
using namespace std;
int main() {
    string text = "Hello, World!";
    string upperText = toUpperCase(text);
    cout << "Upper case: " << upperText << endl;
    return 0;
}