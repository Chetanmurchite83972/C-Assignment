#include <stdio.h>

int main() {
    int num, digit, reversedNum = 0, placeValue = 1000;

    // Accepting a 4-digit number from the user
    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    printf("a. Face value of each decimal digit:\n");
    // Displaying face value of each decimal digit
    printf("%d\n", num / 1000);
    printf("%d\n", (num % 1000) / 100);
    printf("%d\n", (num % 100) / 10);
    printf("%d\n", num % 10);

    printf("b. Place value of each decimal digit:\n");
    // Displaying place value of each decimal digit
    printf("%d x %d + ", num / 1000, placeValue);
    placeValue /= 10;
    printf("%d x %d + ", (num % 1000) / 100, placeValue);
    placeValue /= 10;
    printf("%d x %d + ", (num % 100) / 10, placeValue);
    placeValue /= 10;
    printf("%d x %d\n", num % 10, placeValue);

    printf("c. Number in reverse order by changing decimal place values:\n");
    // Displaying the number in reverse order by changing decimal place values
    while (num != 0) {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    printf("%d\n", reversedNum);

    return 0;
}

