#include "Header.h"
int main()
{
	char arr[20] = "Dhananjay Kulkarni";
	char brr[20];
	StrNCopy(arr, brr, 9);
	printf("%s", brr);
	return 0;
}