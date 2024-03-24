#include<stdio.h>

/*
Print following pattern
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/

int main(void)
{
  int i=5,j=5;

 for(i=1; i<=5; i++)
 {
    for(j=1; j<=5; j++)
    {
       printf("* ");
    }
	printf(" \n");
 }
  return 0;
}

