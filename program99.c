#include<stdio.h>
#include<stdbool.h>

bool checkBit(unsigned int iNo,int iPos1,int ipos2) 
{
	unsigned int iMask1 = 0x00000001,iMask2 = 0x00000001,iMask = 0x00000000;
	unsigned int iResult = 0;
	if((iPos1 < 1) || (iPos1 > 32) || (ipos2 < 1) || (ipos2 > 32))
    {
    	return false;
    }
    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (ipos2 - 1);
    iMask = iMask1 | iMask2;
    iResult = iNo & iMask;
    if(iResult == iMask)
    {
    	return true;
    }
    else
    {
    	return false;
    }

	iResult = iNo ^ iMask;
	
	return iResult;
}
int main()
{
	unsigned int iValue = 0,iPos1=0,iPos2 = 0;
	bool bRet;

	printf("Enter Number\n");
	scanf("%u",&iValue);
	printf("Enter Position\n");
	scanf("%d",&iPos1);
	printf("Enter Second position\n");
	scanf("%d",&iPos2);
	bRet = checkBit(iValue,iPos1,iPos2);
	if(bRet == true)
	{
		printf("Bits are on\n");
	}
	else
	{
		printf("Bits are off\n");
	}

	return 0;
}


