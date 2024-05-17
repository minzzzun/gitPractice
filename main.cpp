#include <iostream>
#include <string>
#include "uppercase.h"
#include "lowercase.h"
using namespace std;
int main() {
    string text = "Hello, World!";
    string upperText = toUpperCase(text);
    cout << "Upper case: " << upperText << endl;
    string lowerText = toLowerCase(text);
    cout << "Lower case: " << lowerText << endl;
return 0; }