/* Accept Number from user and return the Smallest digit
Input  :  7521
Output :  1
Input  :  121
Output :  1
Input  :  75057
Output :  0
*/

#include<stdio.h>
int MinDigit(unsigned long int iNo)
{
	int iDigit = 0,iMin = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iMin < iDigit)
		{
			 iMin = iDigit ;
		}
		iNo = iNo / 10;
	}
	return iDigit;
}


int main()
{
	unsigned long int iValue = 0;
	int iRet = 0;
	printf("Enter Number");
	scanf("%lu",&iValue);

	iRet = MinDigit(iValue);
	printf("Minimum Number is : %d\n",iRet);
}