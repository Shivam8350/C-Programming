/*Accept  Number from User and Check whether that number even or odd.
Input : 4
output : Its Even

Input :7
Output : Its Odd
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
	if(iNo % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int iValue = 0;
	bool bRet;

	printf("Enter Number");
	scanf("%d",&iValue);

	bRet = CheckEven(iValue);
	if(bRet == true)
	{
		printf("%d is Even Number",iValue);
	}
	else
	{
		printf("%d is Odd Number",iValue);
	}

	return 0;
}