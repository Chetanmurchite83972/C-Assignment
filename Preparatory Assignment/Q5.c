#include <iostream>
#include <string>

using namespace std;
void countCharacters(const string& str) {
    int upperCase = 0, lowerCase = 0, digits = 0, specialChars = 0;

    for(char ch : str) {
        if(ch >= 'A' && ch <= 'Z') {
            upperCase++;
        } else if(ch >= 'a' && ch <= 'z') {
            lowerCase++;
        } else if(ch >= '0' && ch <= '9') {
            digits++;
        } else {
            specialChars++;
        }
    }

    cout << "Uppercase letters: " << upperCase << endl;
    cout << "Lowercase letters: " << lowerCase << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special characters: " << specialChars << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    countCharacters(str);
    return 0;
}