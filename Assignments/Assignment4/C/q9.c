#include<stdio.h>


int calculate(int,char,int);

int flag;

int main(void)
{
 char choice;
 int num1,num2,result;
 char opr;

 do
 {
    printf("Enter the number: ");
	scanf("%d %c %d",&num1,&opr,&num2);
	result = calculate(num1,opr,num2);
  
  if(flag == 0)
			printf("%d %c %d = %d\n", num1, opr, num2, result);
		else
			flag = 0;

	printf("Do you want continoue?(y/n): ");
	scanf("%*c%c",&choice);

 }while(choice!='n');
 return 0;
}

int calculate(int num1,char opr,int num2)
{
 int result;

 switch(opr)
 {
   case '+':
   result = num1 + num2;
   break;

   case'-':
   result = num1 - num2;
   break;
  
   case'*':
   result = num1 * num2;
   break;

   case'/':
   result = num1/num2;
   break;
 }
 return result;

}
