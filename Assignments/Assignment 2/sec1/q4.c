#include<stdio.h>

//Write a program to find maximum of two numbers using
//a. If – else
//b. conditional operator
 
 

int main(void)
{
 int num1=50,num2=60;
                    
 if(num1 < num2)
 {
  printf("%d is Maximum \n",num2);
 }
 else
 {
  printf("%d is Maximum \n",num1);
 }

 (num1 < num2) ? (printf("%d is Maximum \n",num2)) : (printf("%d is Maximum \n",num1)); 
 
 return 0;
} 
 
