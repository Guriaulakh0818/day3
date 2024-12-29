#include <bits/stdc++.h>
using namespace std;

string reverseString(const string& str) {
    if (str.empty()) {
        return str;
    }
    return str.back() + reverseString(str.substr(0, str.size() - 1));
}

int main() {
    string input = "Gurvinder Singh";
    string reversed = reverseString(input);
    cout << "Reversed String: " << reversed << endl;
    return 0;
}
