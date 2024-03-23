#include<stdio.h>

//Write a function to calculate factorial of a given number.


unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    int i;

    // Calculate factorial using a loop
    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is: %llu\n", num, factorial(num));
    }

    return 0;
}



