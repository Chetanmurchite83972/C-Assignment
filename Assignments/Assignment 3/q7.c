#include <stdio.h>

int main() {
    int num;

  
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Unique pairs of numbers %d are: \n", num);

    int i = 1;
    while (i <= num) {
        if (num % i == 0) {
            int pair = num / i;
            if (i <= pair) { 
                printf("(%d, %d)\n", i, pair);
            }
        }
        i++;
    }

    return 0;
}

