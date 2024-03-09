#include<stdio.h>

int main()
{
	char ch;
	printf("Enter char : ");
	scanf("%c",&ch);
	if( (ch >= 65 && ch <= 90)  ||  (ch >= 97 && ch <= 122) )
	{
		if((ch >= 65 && ch <= 90))
			printf("%c : Uppercase\n",ch);
		else
			printf("%c : Lowercase \n",ch);
	}
	else if( ch >= 48  && ch <= 57 )
		printf("%c : Digit \n",ch);

	else if(ch =='\n')
		printf("Enter\n");
	else if(ch == '\t')
		printf("Tab \n");
	else if( ch == 32 || ch == ' ')
		printf("Space\n");

	return 0;
}
