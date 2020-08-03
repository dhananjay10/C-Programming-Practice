#include"Header.h"
/////////////////////////////////////////////////////////////////
//
// Function Name : ChkVowel
// Input: Character
// Output: Custom datatype BOOLEAN
// Description: Used to check if character is vowel or not
// Date : 3 Aug 2020
// Author: Dhananjay Kulkarni
//
//////////////////////////////////////////////////////////////////

BOOLEAN ChkVowel(char cValue)
{
	if(cValue == 'a' || cValue == 'e' ||cValue == 'i' ||cValue == 'o' ||cValue == 'u' 
	|| cValue == 'A' || cValue == 'E' ||cValue == 'I' ||cValue == 'O' ||cValue == 'U')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}