#include<stdio.h>
//Write a program to find factorial of given number.

int main(void)
{
 int x,fact=1,i=1;

 printf("Enter the number: \n");
 scanf("%d",&x);

 while(x >= i)
 {
  fact = fact*i;
  i++;
 }
  printf("Factorial is: %d \n",fact);
return 0;
}
