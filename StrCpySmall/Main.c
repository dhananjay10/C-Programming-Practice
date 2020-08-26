#include "Header.h"
int main()
{
	char arr[20] = "DhaNanjaY KulkaRNI";
	char brr[20];
	StrCpySmall(arr, brr);
	printf("%s", brr);
	return 0;
}