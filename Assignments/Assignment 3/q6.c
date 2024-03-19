#include <stdio.h>

int main() {
    int num;


    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d excluding the number itself are: ", num);
    
    int i = 1;
    
   
    while (i < num) {
        if (num % i == 0) {
            printf("%d ", i);
        }
        i++;
    }

    printf("\n");

    return 0;
}

