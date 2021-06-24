#include<stdio.h>
#include<stdbool.h>

unsigned int ToggleBit(unsigned int iNo,int iPos) 
{
	unsigned int iMask = 0x00000001;
	unsigned int iResult = 0;
	if((iPos < 1) || (iPos > 32))
    {
    	return false;
    }
    iMask = iMask << (iPos - 1);

	iResult = iNo ^ iMask;
	
	return iResult;
}
int main()
{
	unsigned int iValue = 0,iPos=0,iRet = 0;

	printf("Enter Number\n");
	scanf("%u",&iValue);
	printf("Enter Position\n");
	scanf("%d",&iPos);

	iRet = ToggleBit(iValue,iPos);
	printf("Updated Number is :%u\n",iRet);

	return 0;
}


