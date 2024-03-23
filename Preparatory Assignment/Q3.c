#include <iostream>

using namespace std;

void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm = 0;

    for (int i = 2; i <= n; ++i) {
         
        if(i <= 2) {
            cout << t1 << ", " << t2 << ", ";
            continue;
        }

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }
}

int main() {
    int num;
    cout << "Enter the number of terms: ";
    cin >> num;
    printFibonacci(num);
    return 0;
}