#include"Header.h"

/////////////////////////////////////////////////////////////////
//
// Function Name : StrCpySmall
// Input: Pointer, Pointer
// Output: Void
// Description: Used to copy small letters of string into another string
// Date : 26 Aug 2020
// Author: Dhananjay Kulkarni
//
//////////////////////////////////////////////////////////////////

void StrCpySmall(char *src, char *dest)
{
	while(*src != '\0')
	{
		if((*src >='a') && (*src <= 'z'))
		{
			*dest = *src;
			dest++;
		}
		src++;
	}
	
	*dest = '\0';
}