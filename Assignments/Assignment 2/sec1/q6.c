#include<stdio.h>

//Write a program to accept a 5 digit number and check whether it is a numeric palindrome.
//(If reversed number is same as entered number it is called palindrome)

int main(void)
{    
  int n,r,sum=0,temp;    
  printf("enter the number=");    
  scanf("%d",&n);    
  temp=n;  

  while(n>0)    
  {    
    r=n%10;    
    sum=(sum*10)+r;    
    n=n/10;    
  }

 if(temp==sum)    
   printf("palindrome number \n");    
 else    
   printf("not palindrome \n");   
 return 0;  

}
