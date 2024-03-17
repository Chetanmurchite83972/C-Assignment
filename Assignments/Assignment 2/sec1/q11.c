#include<stdio.h>

//Write a program to accept a point in Cartesian co-ordinate system and decide the quadrant in
//which the point lies. Also check for special cases point lies on +-xaxis,+-yaxis,0 i i.

int main(void)
{
 int i,j;

 printf("Enter the Cartesian Co-ordinate: ");
 scanf("%d%d",&i,&j);
 
 if(i > 0 && j > 0)
 {
  printf("The %d and %d points lies on 1st quandrant \n",i,j);
 }
 else if(i > 0 && j < 0)
 {
  printf("The %d and %d points lies on 2nd quandrant \n",i,j);
 }
 else if(i < 0 && j > 0)
 {
  printf("The %d and %d points lies on 3rd quandrant \n",i,j);
 }
 else if(i < 0 && j < 0)
 {
  printf("The %d and %d points lies on 4th quandrant \n",i,j);
 }
 else 
 {
  printf("The %d and %d points lies on origin \n",i,j);
 }
return 0;
}
