#include"Header.h"

/////////////////////////////////////////////////////////////////
//
// Function Name : CopyString
// Input: Pointer, Pointer
// Output: Void
// Description: Used to copy contents of one string into another
// Date : 26 Aug 2020
// Author: Dhananjay Kulkarni
//
//////////////////////////////////////////////////////////////////

void CopyString(char *src, char *dest)
{
	while(*src != '\0')
	{	
		*dest = *src;
		src++;
		dest++;
	}
	
	*dest = '\0';
}