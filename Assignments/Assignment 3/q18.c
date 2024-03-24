#include<stdio.h>

int main(void)
{
 int i,j;

 printf("Enter the number 1 to 10: \n");
 scanf("%d",&j);
 for(i=1; i<=10;i++)
 {
  printf("%d x %d = %d\n",j,i,j*i);
 } 
 return 0;
}

   
