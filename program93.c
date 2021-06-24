#include<stdio.h>
// 1111   1111   1111   1111  1111  1111   1011  1011
//F         F     F       F    F      F      B     B      
unsigned int offBit(unsigned int iNo)
{
	unsigned int iMask = 0xFFFFFFBB;
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

