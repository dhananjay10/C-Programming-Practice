#include"Header.h"
int main()
{
	int iValue = 0;
	printf("Enter Number : \n");
	scanf("%d", &iValue);
	DisplayFactors(iValue);
	getch();
	return 0;
}