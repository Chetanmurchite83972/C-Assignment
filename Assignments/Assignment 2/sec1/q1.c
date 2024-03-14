#include<stdio.h>

//Write a program to accept two numbers and display division of the two numbers.
//Check for divide by zero error. If divider is zero then display appropriate error message.
int main(void)
{
  int a,b;
  float c;

  printf("Enter the number: ");
  scanf("%d%d",&a,&b);

  if(b!=0)
  {
    c=a/b;
	printf("c:%f\n",c);
  }
  else
  {
   printf("Divider is Zero");
  }  
 return 0;
}
