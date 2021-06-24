/*Accept Number from User and return its Factorial
Input : 5
Output : 5*4*3*2*1

Input : 4
Output : 4*3*2*1
*/

#include<stdio.h>
int Fact(int iNo)
{
	int iCnt = 0,iMult = 1;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iMult = iMult * iCnt;
	}
	return iMult;
}
int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	iRet = Fact(iValue);
	printf("Result is :%d\n",iRet);
	return 0;
}