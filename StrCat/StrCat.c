#include"Header.h"

/////////////////////////////////////////////////////////////////
//
// Function Name : StrCat
// Input: Pointer, Pointer
// Output: Void
// Description: Used to append one string to another
// Date : 26 Aug 2020
// Author: Dhananjay Kulkarni
//
//////////////////////////////////////////////////////////////////

void StrCat(char *src, char *dest)
{
	while(*src != '\0')
	{
		src++;
	}
	
	while(*dest != '\0')
	{
		*src = *dest;
		dest++;
		src++;
	}
	
	
	*dest = '\0';
}