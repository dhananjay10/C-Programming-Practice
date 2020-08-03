#include"Header.h"

/////////////////////////////////////////////////////////////////
//
// Function Name : PrintEven
// Input: Integer
// Output: void
// Description: Used to print even numbers upto entered number
// Date : 2 Aug 2020
// Author: Dhananjay Kulkarni
//
//////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
	if(iNo <= 0)
	{
		return;
	}
	
	for(int iCnt = 1; iCnt < iNo; iCnt++)
	{
		if(iCnt%2 == 0)
		{
			printf("%d\n",iCnt);
		}
	}
}