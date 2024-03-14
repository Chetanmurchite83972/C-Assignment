#include<stdio.h>

//Input a number and display whether number is Even or Odd.

int main(void)
{
 int num1;
  
  printf("Enter the number: ");
  scanf("%d",&num1);

  if(num1 % 2 == 0)
  {
   printf("%d is Even Number \n",num1);
  }
  else
  {
   printf("%d Number is odd \n",num1);
  }
  return 0;
}
