#include<stdio.h>

//Write a program to display number of days in the given month and year using switch case statement.

int main(void)
{
 int month,year;
    printf("Enter month number(1-12): \n");
    scanf("%d", &month);
	printf("Enter the year: ");
	scanf("%d",&year);
 
      int  leap = 0;
	  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))

      leap = 1;

    switch(month)
    {
        case 1:
            printf("31 days \n");
            break;
        case 2:
		    leap = (leap) ? 29 : 28;
            printf("%d days \n",leap);
            break;
        case 3:
            printf("31 days \n");
            break;
        case 4:
            printf("30 days \n");
            break;
        case 5:
            printf("31 days \n");
            break;
        case 6:
            printf("30 days \n");
            break;
        case 7:
            printf("31 days \n");
            break;
        case 8:
            printf("31 days \n");
            break;
        case 9:
            printf("30 days \n");
            break;
        case 10:
            printf("31 days \n");
            break;
        case 11:
            printf("30 days \n");
            break;
        case 12:
            printf("31 days \n");
            break;
        default:
            printf("Invalid input! Please enter month number between 1-12 \n");

    }

    return 0;
}
 
