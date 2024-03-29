/*
Write a program to display
a. Prime numbers between 1 to 100
b. Armstrong Numbers between 1 to 500
*/

#include <stdio.h>
 
int main()
{
  int i, a = 1, count; 
  

  while(a <= 100)
  {
    count = 0;
    i = 2;
    while(i <= a/2)
    {
      if(a%i == 0)
      {
        count++;
	break;
      }
      i++;	
    }	
    if(count == 0 && a != 1 )
    {
	printf(" %d ", a);
    }
    a++; 
  }
printf("\n");
  return 0;
}
