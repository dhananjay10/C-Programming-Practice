#include "Header.h"
int main()
{
	char cValue = '\0';
	BOOLEAN bRet = FALSE;
	printf("Enter a character:\n");
	scanf("%c", &cValue);
	bRet = ChkVowel(cValue);
	if(bRet == TRUE)
	{
		printf("It is Vowel");
	}
	else 
	{
		printf("It is not Vowel");
	}
	getch();
	return 0;
}