#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string toLowerCase(const string& str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(),
::tolower);
    return result;
}