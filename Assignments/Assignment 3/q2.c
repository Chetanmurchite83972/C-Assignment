#include<stdio.h>
//Write a program to print table of given number.
int main(void)
{
 int num1,i=1;

 printf("Enter the table number: ");
 scanf("%d",&num1);

 while(i<=10)
 {
  printf("%d x %d = %d \n",num1,i,num1*i);
  i++;
 }
 return 0;
}
