#include <stdio.h>

int main() {
    int num;
    
    // Accepting input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Printing the multiplication table
    printf("Multiplication table for %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}
    


