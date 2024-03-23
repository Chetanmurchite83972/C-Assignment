#include<stdio.h>

//Write a program to display n terms of Fibonacci series

int main(void)
{
 int num1,num2=0,num3=1,res,i;

 printf("Enter the number: \n");
 scanf("%d",&num1);

  printf("Finonacci series: \n"); 
    for(i = 2; i <= num1; i++)
	{
        res = num2 + num3;
        printf("%d \n", res);
        num2 = num3;
        num3= res;
    }
 return 0;
}
