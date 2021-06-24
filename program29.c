/* Accept Number from user and return the largest digit
Input  :  7521
Output :  7
Input  :  121
Output :  2
Input  :  75057
Output :  7
*/
#include<stdio.h>
#include<stdbool.h>
int MaxDigit(int iNo)
{
	int iDigit = 0,iMax = 0;
	if(iNo < 0)
		{iNo = -iNo; }
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iDigit > iMax)
		{
			iMax = iDigit;
			if(iMax == 9)
			{
				break;
			}
		}
		iNo = iNo / 10;
	}
	return iMax;
}
int main()
{
	int iValue = 0,iRet = 0;
	printf("Enter Number\n");
	scanf("%d",&iValue);

	iRet = MaxDigit(iValue);

	printf("largest digit : %d\n",iRet);

	return 0;
}
