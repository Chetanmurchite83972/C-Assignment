#include<stdio.h>

//	Basic calculator which will perform addition, subtraction, multiplication and division
//	for division check for divide by zero error
//  Jump statmet  : goto
int main()
{
	float n1,n2,ans;
	char op;
Here:
	printf("Enter num1 :   ");
	scanf("%f",&n1);// 10
	printf("Enter Operand  : ");
	scanf("%*c%c",&op);// *
	printf("Enter num2 :  ");
	scanf("%f",&n2);// 20

	switch( op )
	{
		case '+' : ans = n1 + n2 ;
				   printf("ans : %.2f \n",ans);
				   break;
		case '-' : ans = n1 - n2 ;
				  printf("ans = %.2f \n",ans);
				  break;
		case '*' : ans = n1 * n2 ;
				   printf("ans : %.2f \n",ans);
				   break;

		case '/' :if( n2 != 0 )
					{
						ans = n1 /  n2 ;
				  	    printf("ans : %.2f \n",ans);
					}
				  else
				  	printf("cant Div by 0 \n");
				  break;
		default : printf("Invalid Operand \n");
				  break;
	}
	char ch;
	printf("Do you want to continue : y/n ");
	scanf("%*c%c",&ch);

	if( ch == 'y' || ch == 'Y')
		goto Here;

	return 0;
}
