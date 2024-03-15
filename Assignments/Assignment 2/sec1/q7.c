//Write a program to display number of days in the given year. Check condition for leap year.
//A year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap years.
//a. Without using logical operators
//b. Using logical operators
//c. Conditional operator

#include<stdio.h>

//a. Without using logical operators:
int main(void)
{
    int year, days;

    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
	{
        if (year % 100 != 0 || year % 400 == 0)
            days = 366;
			
        else
		{
            days = 365;
			printf("Number of days in the year %d: %d it's leap year \n", year, days);

	   	}
	}	
  	else 
	{
     days = 366;
     printf("Number of days in the year %d: %d it's not leap year \n", year, days);
    }
  
  return 0;
 }  
   
   

   //b. Using logical operator
#include<stdio.h>
int main(void)
{
    int year, days;

    printf("Enter the year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        days = 366;	
      printf("Number of days in the year %d: %d it's leap year \n", year, days);
    else
        days = 365;
      printf("Number of days in the year %d: %d it's not leap year \n", year, days);
  return 0;
}



//c. Conditional operator
#include<stdio.h>
int main(void)
{
    int year, days;

    printf("Enter the year: ");
    scanf("%d", &year);

    days = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 366 : 365;

    printf("Number of days in the year %d: %d\n", year, days);

    return 0;
}

