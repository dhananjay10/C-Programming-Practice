#include"Header.h"
//////////////////////////////////////////
//
// Function Name : DisplayFactors
// Input : Integer
// Output : void
// Description : Prints even factors of given number
// Date : 2 Aug 2020
// Author : Dhananjay Kulkarni
//
////////////////////////////////////////////

void DisplayFactors(int iNo)
{
	if(iNo <= 0)
	{
		iNo = -iNo;		
	}
	
	for(int iCnt = 1; iCnt <= iNo/2; iCnt++)
	{	
		if(iNo%iCnt == 0)
		{
			printf("%d \n", iCnt);
		}
	}
		
}