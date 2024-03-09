#include <stdio.h>

int main() {
    int num;

    // Accepting input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Printing the number in different formats
    printf("Character: %c\n", num);
    printf("Decimal: %d\n", num);
    printf("Octal: %o\n", num);
    printf("Hexadecimal: %X\n", num);

    return 0;
}

