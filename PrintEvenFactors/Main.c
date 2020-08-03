#include"Header.h"
int main()
{
	int iValue = 0;
	printf("Enter Number : \n");
	scanf("%d", &iValue);
	DisplayEvenFactors(iValue);
	getch();
	return 0;
}