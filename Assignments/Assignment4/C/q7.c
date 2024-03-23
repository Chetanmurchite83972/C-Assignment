#include<stdio.h>

/*
Write a function to calculate sum and product into a single function.
a. Using global variables (for result)
b. Without using global variables
*/



//A
int sum, product;

void calculate(int num1, int num2) {
    sum = num1 + num2;
    product = num1 * num2;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    calculate(num1, num2);

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}



//B

void calculate(int num1,int num2,int *sum,int *product)
{
  *sum = num1 + num2;
  *product = num1 * num2;
}

int main(void)
{
 int num1,num2,sum,product;
 printf("Enter two number: ");
 scanf("%d%d",&num1,&num2);
 
 calculate(num1,num2,&sum,&product);

 printf("Sum: %d \n",sum);
 printf("Product: %d\n",product);

 return 0;
}
