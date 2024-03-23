#include <iostream>
#include <string>

using namespace std;

struct Student {
    string studentName;
    string rollNo;
    int totalMarks;
};

void readStudentData(Student& student) {
    cout << "Enter student name: ";
    getline(cin, student.studentName);
    cout << "Enter roll number: ";
    getline(cin, student.rollNo);
    cout << "Enter total marks: ";
    cin >> student.totalMarks;
    cin.ignore();  // clear the newline character from the input buffer
}

void displayStudentData(const Student& student) {
    cout << "Student Name: " << student.studentName << "\n";
    cout << "Roll Number: " << student.rollNo << "\n";
    cout << "Total Marks: " << student.totalMarks << "\n";
}

int main() {
    const int MAX_STUDENTS = 100;  // maximum number of students
    Student students[MAX_STUDENTS];

    int numStudents;
    cout << "Enter the number of students (up to " << MAX_STUDENTS << "): ";
    cin >> numStudents;
    cin.ignore();  // clear the newline character from the input buffer

    if(numStudents > MAX_STUDENTS) {
        cout << "Too many students. Only " << MAX_STUDENTS << " are allowed.\n";
        return 1;
    }

    for(int i = 0; i < numStudents; i++) {
        cout << "Enter details for student " << i+1 << ":\n";
        readStudentData(students[i]);
    }

    cout << "\nStudent Details:\n";
    for(int i = 0; i < numStudents; i++) {
        cout << "Details for student " << i+1 << ":\n";
        displayStudentData(students[i]);
    }

    return 0;
}