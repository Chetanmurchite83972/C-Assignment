//Armstrong Numbers between 1 to 500

#include<stdio.h>

int main(void)
{
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(temp==sum)    
printf("armstrong  number \n");    
else    
printf("not armstrong number \n");    
 return 0;
}
