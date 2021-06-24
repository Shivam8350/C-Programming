
#include<stdio.h>
#include<stdbool.h>


 int CountBit(unsigned int iNo) 
{
	unsigned int iMask = 0x00000001,iResult = 0;  //  1  0  1  0  0  1  0  1
	int iCnt = 0,i = 0;
	for(i = 1;i<32;i++)
	{
		iResult =iNo & iMask;
		if(iResult == iMask)
		{
			iCnt++;
		}
		iMask = iMask << 1;
	}
	return iCnt;								    
}
int main()
{
	unsigned int iValue = 0;
	int iRet = 0;

	printf("Enter Number\n");
	scanf("%u",&iValue);

	iRet = CountBit(iValue);
	printf("Total on bits are :%u\n",iRet);

	return 0;
}


