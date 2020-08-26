#include"Header.h"

/////////////////////////////////////////////////////////////////
//
// Function Name : StrCpyCap
// Input: Pointer, Pointer
// Output: Void
// Description: Used to copy capital letters of string into another string
// Date : 26 Aug 2020
// Author: Dhananjay Kulkarni
//
//////////////////////////////////////////////////////////////////

void StrCpyCap(char *src, char *dest)
{
	while(*src != '\0')
	{
		if((*src >='A') && (*src <= 'Z'))
		{
			*dest = *src;
			dest++;
		}
		src++;
	}
	
	*dest = '\0';
}