#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo,int iPos) 
{
	unsigned int iMask = 0x00000001;
	unsigned int iResult = 0;
	if((iPos < 1) || (iPos > 32))
    {
    	return false;
    }
    iMask = iMask << (iPos - 1);

	iResult = iNo & iMask;
	if(iResult == iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	unsigned int iValue = 0,iPos=0;
	bool bRet;

	printf("Enter Number\n");
	scanf("%u",&iValue);
	printf("Enter Position\n");
	scanf("%d",&iPos);

	bRet = CheckBit(iValue,iPos);

	if(bRet == true)
	{
		printf("bit is on\n");
	}
	else
	{
		printf("bit is off\n");
	}

	return 0;
}


