#include"Header.h"

/////////////////////////////////////////////////////////////////
//
// Function Name : DisplayConvert
// Input: Character
// Output: Converted case of input character
// Description: Used to print converted case of input character
// Date : 3 Aug 2020
// Author: Dhananjay Kulkarni
//
//////////////////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
	if(cValue >= 'a' && cValue <= 'z')
	{
		printf("Uppercase Character: %c", cValue - 32);
	}
	else
	{
		printf("Lowercase Character: %c", cValue + 32);
	}
}