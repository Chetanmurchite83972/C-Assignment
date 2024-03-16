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

    days = 31; // Default to maximum days in a month

    if (month == 2) {
        if (!((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
            days = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    }

    printf("Number of days in the month: %d\n", days);

    return 0;
}

