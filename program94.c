#include<stdio.h>

unsigned int ToggleBit(unsigned int iNo) 
// 0000  0000  0000  0000  0000 0000 0000  0100
// 0000  0000  0000  0000  0000 0000 0000  0000
{
	unsigned int iMask = 0x00000004;
	unsigned int Result = 0;

	Result = iNo ^ iMask;

	return Result;
}
int main()
{
	unsigned int iValue = 0;
	int iRet = 0;

	printf("Enter Number\n");
	scanf("%u",&iValue);

	iRet = ToggleBit(iValue);
	printf("Number after Updation : %d\n",iRet);

	return 0;
}


