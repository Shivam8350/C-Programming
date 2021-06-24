/*Accept Number for User and return Even Digits
Input : 4521
Output : 2

Input : 8642
Output : 4

input : 7139
output : 0
*/

#include<stdio.h>
int EvenDigits(int iNo)
{   
	int iDigit = 0;
	int iCnt = 0;
	if(iNo < 0)
		{iNo = -iNo;}
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if((iDigit % 2) == 0)
		{
			iCnt++;
		}
		iNo = iNo/10;
	}
	return iCnt;
}

int main()
{
	int iValue = 0,iRet = 0;
	printf("Enter Number\n");
	scanf("%d",&iValue);

	iRet = EvenDigits(iValue);
	printf("Number of even digit are : %d\n",iRet);
	return 0;
}