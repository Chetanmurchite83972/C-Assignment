#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int decimalToBinary(int n) {
    int binary = 0;
    int counter = 0;
    while(n > 0) {
        int bit = n & 1;
        binary += bit * pow(10, counter);
        n >>= 1;
        counter++;
    }
    return binary;
}

int decimalToOctal(int n) {
    if(n == 0)
        return 0;
    else
        return (n % 8) + 10 * decimalToOctal(n / 8);
}

string decimalToHexadecimal(int n) {
    if(n == 0)
        return "";
    int remainder = n % 16;
    char hexChar = remainder < 10 ? remainder + '0' : remainder - 10 + 'A';
    return decimalToHexadecimal(n / 16) + hexChar;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Given Number: " << num << endl;
    cout << "Binary equivalent: " << decimalToBinary(num) << endl;
    cout << "Octal equivalent: " << decimalToOctal(num) << endl;
    cout << "Hexadecimal equivalent: " << decimalToHexadecimal(num) << endl;

    return 0;
}