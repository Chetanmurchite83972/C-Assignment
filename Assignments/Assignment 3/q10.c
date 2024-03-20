//Write a program to print table of given number.
#include<stdio.h>

int main(void)
{
  int num1,num2,i;

  printf("Enter the number: \n");
  scanf("%d",&num1);

  for(i=1; i<=10; i++)
  {
   num2 = num1*i;
   printf("%d x %d  =  %d\n",num1,i,num2);
  }
  return 0;
}
