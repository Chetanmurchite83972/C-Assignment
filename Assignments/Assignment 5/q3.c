#include<stdio.h>
//Write a function to reverse the array elements.
void accept_array(short arr[],int length);
void reverse_array(short arr[], int length); 
void print_array(short arr[], int length);

int main(void)
{
    short arr[6];
    accept_array(arr,6);
    reverse_array(arr, 6);
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


void reverse_array(short arr[], int length)
{
    printf("Enter array element: \n");
	for(int i = 0 , j = length - 1 ; i < j ; i++, j--)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}

void print_array(short arr[], int length)
{
	printf("Array : ");
	for(int  i = 0 ; i < length ; i++)
		printf("%-4hd", arr[i]);
	printf("\n");
}


