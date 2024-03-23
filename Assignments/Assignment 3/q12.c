#include<stdio.h>

//Write a program to accept integer values of base and index and calculate power of base to index.

int main(void)
{
 int num1,num2,i, res = 1;

 printf("Enter the base: \n");
 scanf("%d",&num1);

 printf("Enter the index: \n");
 scanf("%d",&num2);

 for(i=1; i <= num2; i++)
 {
  res = res*num1;
 }
 printf("Power is: %d \n",res);

return 0;

}
