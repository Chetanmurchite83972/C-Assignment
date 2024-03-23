#include <iostream>
#include <string>

using namespace std;

void swap(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

int main() {
    string nameOfStudents[10];
    int n;

    cout << "Enter the number of students (up to 10): ";
    cin >> n;
    cin.ignore(); 

    // Read names of students
    for(int i = 0; i < n; i++) {
        cout << "Enter the name of student " << (i + 1) << ": ";
        getline(cin, nameOfStudents[i]);
    }

    // Sort names using bubble sort
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(nameOfStudents[j] > nameOfStudents[j + 1]) {
                swap(nameOfStudents[j], nameOfStudents[j + 1]);
            }
        }
    }

    // Display sorted names
    cout << "\nSorted names of students:\n";
    for(int i = 0; i < n; i++) {
        cout << nameOfStudents[i] << endl;
    }

    return 0;
}