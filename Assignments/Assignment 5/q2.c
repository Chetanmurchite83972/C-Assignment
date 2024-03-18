#include<stdio.h>

 //Write a function to accept array elements from the user. Write another function to print array
 //elements. Re-use these functions in rest of the assignments wherever required.

void accept_array(short arr[],int length);
void print_array(short arr[],int length);

int main(void)
{
 
 short arr[6];

 accept_array(arr,6);
 print_array(arr,6);

 return 0;

}

void accept_array(short arr[],int length)
{
 printf("Enter array element: ");
 for(int i=0;i<length;i++)
 {
   printf("arr[%d]: ",i);
   scanf("%hd",arr+i);
 }
}

void print_array(short arr[],int length)
{
  printf("Array: ");
  for(int i=0; i<length; i++)
   printf("%-4hd",arr[i]);
  printf("\n"); 
}
