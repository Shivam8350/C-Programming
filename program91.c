#include<stdio.h>

int Countone(unsigned int iNo)
{
	unsigned int iDigit = 0;
	int iCnt = 0;
	while(iNo > 0)
	{
		iDigit = iNo % 2;
		iCnt = iCnt + iDigit;
		iNo = iNo / 2;
	}
	return iCnt;
}
int main()
{
	unsigned int iValue = 0;
	int iRet = 0;

	printf("Enter Number\n");
	scanf("%u",&iValue);

	iRet = Countone(iValue);
	printf("Number of one bits are : %d\n",iRet);

	return 0;
}