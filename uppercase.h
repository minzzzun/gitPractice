#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string toUpperCase(const string& str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(),
::toupper);
    return result;
}