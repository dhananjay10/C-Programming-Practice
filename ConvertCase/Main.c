#include "Header.h"
int main()
{
	char cValue = '\0';
	printf("Enter a character:\n");
	scanf("%c", &cValue);
	DisplayConvert(cValue);
	getch();
	return 0;
}