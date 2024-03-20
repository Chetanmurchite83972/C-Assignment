//Write a program to find factorial of given number

#include<stdio.h>

int main(void)
{
 int num,i,fact=1;

 printf("Enter the number: \n");
 scanf("%d",&num);

  for(i=1; i<=num; i++)
  {
      fact=fact*i;
  }
  printf("Given %d factorial is: %d \n",num,fact);
 return 0;
}
