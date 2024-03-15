#include<stdio.h>

//Write a program to find maximum of three numbers using
//a. If – else
//b. conditional operator. 

int main(void)
{
 int num1=50,num2=60,num3=55,max;
                    
 if(num1 < num2)
 {
  printf("%d is Maximum \n",num2);
 }
 else if(num1 < num3)
 {
  printf("%d is Maximum \n",num3);
 }
 else
 {
  printf("%d is Maximum \n",num1);
 }

  max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
  printf("%d is Maximum \n",max);

} 
 
