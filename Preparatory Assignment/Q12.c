#include <iostream>
#include <string>

using namespace std;

string reverse_string(string str) {
    int n = str.length();
    for(int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
    }
    return str;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string reversed = reverse_string(str);
    cout << "Reversed string: " << reversed << "\n";
    return 0;
}