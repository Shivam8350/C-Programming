/*Accept Two Number From User and Calculate its power.
Input : 2   4
Output: 2*2*2*2

Input: 4   3
Output: 4*4*4
*/

#include<stdio.h>

int Power(int iNo1,int iNo2)
{
	int iCnt = 0;
	int iMul = 1;
	if(iNo1 <0)
		{  iNo1 = -iNo1;  }
	if(iNo2 <0)
		{  iNo2 = -iNo2;  }
	for(iCnt=1;iCnt<=iNo2;iCnt++)
	{
		iMul = iMul * iNo1;
	}
	return iMul;
}

int main()
{
	int iValue1 = 0,iValue2 = 0;
	int iRet = 0;

	printf("Enter First Number\n");
	scanf("%d",&iValue1);
	printf("Enter Second Number\n");
	scanf("%d",&iValue2);

	iRet = Power(iValue1,iValue2);

	printf("Result is : %d\n",iRet);
	return 0;
}
