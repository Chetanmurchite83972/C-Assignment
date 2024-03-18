#include<stdio.h>
typedef enum operation {EXIT,SUM_Digit,REV,PALIN,ARM}opr;

int main()
{
            int num;
            opr choice;
            printf("Enter the number: \n");
            scanf("%d",&num);

     do
     {
       printf("0.EXIT \n 1.SUM_Digit \n 2.REV \n 3.PALIN \n 4.ARM \n");
       printf("Enter the Choice: \n");
       scanf("%d",&choice);
       int temp = num,sum=0,rev=0,arm=0,rem;

       switch(choice)
       {
          case EXIT: printf("Bye....... \n");
           break;

          case SUM_Digit: while(temp!=0)
                {
                 rem = temp%10;
				 sum = sum+rem;
				 temp = temp/10;
				}
				printf("SUM = %d\n",sum);
				break;

          case REV:
                   while (num != 0) {
                   rem = num % 10;
                   rev = rev * 10 + rem;
                   num /= 10;
                     }

                  printf("Reversed number: %d\n", rev);
				  
				  break;


         case PALIN:    
                 while(num>0)    
                 {    
                 rem=num%10;    
                 sum=(sum*10)+rem;    
                 num=num/10;    
                 }    
                 if(temp==sum)    
                 printf("palindrome number \n");    
                 else    
                 printf("not palindrome \n");   
              break;

         case ARM: while(temp!=0)
          {
           rem=temp%10;
		   arm=arm+(rem*rem*rem);
		   temp=temp/10;
           
		   if(arm == num)
		     printf("Armstrong:%d==%d\n",num,arm);
		   else
		     printf("Not Armstrong \n");
		 break;
		  }

     default: printf("Invalid Choise \n");
     break;
    }
   }   
   while(choice!=0);

   return 0;

}  
