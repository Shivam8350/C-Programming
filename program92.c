#include<stdio.h>

unsigned int offBit(unsigned int iNo)
{
	unsigned int iMask = 0xFFFFFFFB;
	unsigned int Result = 0;
	Result = iNo & iMask;

	return Result;
}
int main()
{
	unsigned int iValue = 0;
	int iRet = 0;

	printf("Enter Number\n");
	scanf("%u",&iValue);

	iRet = offBit(iValue);
	printf("Number after Updation : %d\n",iRet);

	return 0;
}

