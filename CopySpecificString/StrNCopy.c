#include"Header.h"

/////////////////////////////////////////////////////////////////
//
// Function Name : StrNCopy
// Input: Pointer, Pointer, Integer
// Output: Void
// Description: Used to copy N contents of one string into another
// Date : 26 Aug 2020
// Author: Dhananjay Kulkarni
//
//////////////////////////////////////////////////////////////////

void StrNCopy(char *src, char *dest, int iNo)
{
	
	while((*src != '\0') && (iNo != 0))
	{	
		*dest = *src;
		dest++;
		src++;
		iNo--;
	}
	
	*dest = '\0';
}