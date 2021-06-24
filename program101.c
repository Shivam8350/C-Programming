
#include<stdio.h>
#include<stdbool.h>
/*
		iPos = 4

input    1  0  1  0  1  1  0  0
		 0  0  0  0  1  0  0  0
         1  1  1  1  0  1  1  1
__________________________________
Output   1  0  1  0  0  1  0  0

*/

unsigned int OffBit(unsigned int iNo,int iPos) 
{
	unsigned int iMask = 0x00000001;
	unsigned int iResult = 0;
	if((iPos < 1) || (iPos > 32))
    {
    	return false;
    }
    iMask = iMask << (iPos-1);

    iMask = ~iMask;

    iResult = iNo & iMask;
    return iResult; 
}
int main()
{
	unsigned int iValue = 0,iPos = 0,iRet = 0;

	printf("Enter Number\n");
	scanf("%u",&iValue);
	printf("Enter Position\n");
	scanf("%d",&iPos);

	iRet = OffBit(iValue,iPos);
	printf("New number is :%u\n",iRet);

	return 0;
}


