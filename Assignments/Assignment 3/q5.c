#include<stdio.h>

//Write a program to find factorial of given number.

int main(void)
{
    int num;
    long long factorial = 1;


    printf("Enter a number: \n");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial does not exist for negative numbers\n");
        return 0;
    }

    // Calculate factorial using a while loop
    while (num > 1) {
        factorial *= num;
        num--;
    }

    // Print the result
    printf("Factorial is: %lld\n", factorial);

    return 0;
}

 
