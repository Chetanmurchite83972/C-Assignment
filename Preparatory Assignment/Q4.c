#include <iostream>

using namespace std;

string calculateGrade(int totalMarks) {
    if(totalMarks >= 90) {
        return "Ex";
    } else if(totalMarks >= 80) {
        return "A";
    } else if(totalMarks >= 70) {
        return "B";
    } else if(totalMarks >= 60) {
        return "C";
    } else {
        return "F";
    }
}

int main() {
    int marks[5];
    int totalMarks = 0;

    
    for(int i = 0; i < 5; i++) {
        cout << "Enter marks for subject " << (i + 1) << ": ";
        cin >> marks[i];
        totalMarks += marks[i];
    }
    totalMarks /= 5;
    string grade = calculateGrade(totalMarks);

    cout << "Final Grade: " << grade << endl;

    return 0;
}