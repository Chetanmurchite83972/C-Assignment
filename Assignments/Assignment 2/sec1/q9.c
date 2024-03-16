//Write a program to display number of days in the given month and year using
//a. Using If else ladder.
//b. Using logical operators.

#include <stdio.h>

int main() {
    int month, year, days;

    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    if (month < 1 || month > 12) {
        printf("Invalid month entered.\n");
        return 1; // Exit the program with error
    }

    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days = 29;
        } else {
            days = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else {
        days = 31;
    }

    printf("Number of days in the month: %d\n", days);

    return 0;
}


