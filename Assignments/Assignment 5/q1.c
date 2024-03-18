#include<stdio.h>

int main(void)
{
    int marks[5]; // Array to store marks of five subjects
    int total = 0;
    float average;

    // Input marks for five subjects
    printf("Enter marks for five subjects:\n");
    for(int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i]; // Calculate total marks
    }

    // Calculate average marks
    average = (float)total / 5.0;

    // Print total and average marks
    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

    return 0;
}


