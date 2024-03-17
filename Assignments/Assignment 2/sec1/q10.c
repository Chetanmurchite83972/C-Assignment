#include<stdio.h>


//Write a program to accept a character c and display category of the input character.
//ALPHABET: c is a letter (65 to 90 or 97 to 122)
//UPPERCASE: c is an uppercase letter (65 to 90)
//LOWERCASE : c is a lowercase letter (97 to 122)
//DIGIT: c is a digit (48 to 57)
//SPACE: c is a space(32), tab(9), carriage return(13), new line(10)
//OTHER: Not listed above

int main(void)
{
 char c;

 printf("Enter the Character :\n");
 scanf("%c",&c);

 if(c >= 65 && c <= 97 || c >= 97 && c <= 122)
 {
    printf("%c is a letter \n",c);
    if(c >= 65 && c <= 90)
    {
      printf("%c is uppercase letter \n",c);
    } 
    else if(c >= 97 && c <= 122)
    {
      printf("%c is lowercase letter \n",c);
    }
 } 

 else if(c >= 48 && c >= 57)
 {
   printf("%c is a digit \n",c);
 }

 else if(c == 32)
 {
   printf("%c is a space \n",c);
 }

 else if(c == 9)
 {
  printf("%c is a tab \n",c);
 }

 else if(c == 13)
 {
  printf("%c is a carriage return \n",c);
 }

 else if(c == 10)
 {
  printf("%c is a new line \n",c);
 }

 return 0;
}
