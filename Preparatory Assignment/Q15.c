#include <iostream>
#include <string>
using namespace std;
// User-defined function to check if a character is an alphabet
bool isalpha(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}
// User-defined function to convert a character to uppercase
char toupper(char c) {
    if(c >= 'a' && c <= 'z') {
        return c - 'a' + 'A';
    }
    return c;
}

int main() {
    // Input the string
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    // Initialize the count array
    int count[26] = {0};

    // Count the occurrences of each alphabet
    for(char c : str) {
        if(isalpha(c)) {
            c = toupper(c);
            count[c - 'A']++;
        }
    }

    // Display the counts
    for(int i = 0; i < 26; i++) {
        if(count[i] > 0) {
            cout << char(i + 'A') << " : " << count[i] << "\n";
        }
    }
    return 0;
}