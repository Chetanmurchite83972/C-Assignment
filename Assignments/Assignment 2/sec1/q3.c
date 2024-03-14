#include<stdio.h>
//Write a program to accept number and check whether the number is +ve, -ve and zero

int main(void)
{
 int num;
 
 printf("Enter the number: ");
 scanf("%d",&num);

 if(num > 0)
 {
  printf("%d the number is positive\n");
 }
 else
 {
  printf("-%d the number is negative\n");
 }
}
