#include <stdio.h>

int main() {
    // Variables to hold the two numbers
    int num1, num2;

    // Accepting input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Finding sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    // Finding difference
    int diff = num1 - num2;
    printf("Difference: %d\n", diff);

    // Finding product
    int product = num1 * num2;
    printf("Product: %d\n", product);

    return 0;


}
