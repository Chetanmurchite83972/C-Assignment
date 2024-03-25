#include<stdio.h>

//Write a program to accept a number and check whether it is Prime no.


int main()
{
    int num,i,flag;
     
   printf("Enter the number: ");
   scanf("%d",&num);
  
   
    for(i=2; i <= num/2; i++)
	{
    	if(num%i==0)
		{
          flag = 1;
		  break;
	    } 
    }

	if(flag == 0)
       	{
          printf("%d is  prime \n", num);
	    } 
    else
         printf("%d is not prime \n", num);

	return 0;	 
}
