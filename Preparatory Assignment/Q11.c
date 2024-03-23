#include <iostream>
#include <string>
using namespace std;
// Employee structure
struct Employee {
    string firstName;
    string lastName;
    double monthlySalary;
};

// Initialize the Employee
void emp_init(Employee* e) {
    cout << "Enter first name: ";
    cin >> e->firstName;
    cout << "Enter last name: ";
    cin >> e->lastName;
    cout << "Enter monthly salary: ";
    cin >> e->monthlySalary;
}

// Set the salary of the Employee
void set_salary(Employee* e, double sal) {
    if(sal >= 0.0) {
        e->monthlySalary = sal;
    }
}

// Display the Employee
void emp_display(const Employee* e) {
    cout << "Employee: " << e->firstName << " " << e->lastName << "\n";
    cout << "Monthly Salary: " << e->monthlySalary << "\n";
    cout << "Yearly Salary: " << e->monthlySalary * 12 << "\n";
}

// Calculate the average salary of multiple employees
double average_salary(Employee* employees, int n) {
    double sum = 0.0;
    for(int i = 0; i < n; i++) {
        sum += employees[i].monthlySalary;
    }
    return sum / n;
}

int main() {
    const int noOfEmployees = 3;
    // Create an array of Employee objects
    Employee employees[noOfEmployees];

    // Initialize the Employees
    for(int i = 0; i < noOfEmployees; i++) {
        cout << "Enter details for employee " << (i + 1) << ":\n";
        emp_init(&employees[i]);
    }

    // Display the Employees' yearly salaries
    for(int i = 0; i < noOfEmployees; i++) {
        emp_display(&employees[i]);
    }

    // Calculate and display the average salary
    double avg = average_salary(employees, noOfEmployees);
    cout << "\nAverage monthly salary: " << avg << "\n";

    // Give each Employee a 10% raise
    for(int i = 0; i < noOfEmployees; i++) {
        set_salary(&employees[i], employees[i].monthlySalary * 1.1);
    }

    // Display the Employees' yearly salaries again
    cout << "\nAfter 10% raise:\n";
    for(int i = 0; i < noOfEmployees; i++) {
        emp_display(&employees[i]);
    }

    // Calculate and display the average salary again
    avg = average_salary(employees, noOfEmployees);
    cout << "\nAverage monthly salary after raise: " << avg << "\n";

    return 0;
}