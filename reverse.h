#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseString(const string& str) {
    string result = str;
    reverse(result.begin(), result.end());
    return result;
}