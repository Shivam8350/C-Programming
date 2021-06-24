/*/* Accept Number from user and check whether number is Pallindrom or not
Input  :  7521
Output :  False
Input  :  121
Output :  True
Input  :  75057
Output :  True
*/
#include<stdio.h>
#include<stdbool.h>
int CheckPallindrome(int iNo)
{
	int iDigit = 0,iRev = 0, iTemp = 0;
	if(iNo < 0)
	{iNo = -iNo; }
    iTemp = iNo;
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iRev = (iRev * 10) + iDigit;
		iNo = iNo / 10;
    }
    if(iRev == iTemp)
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
	printf("Enter Number\n");
	scanf("%d",&iValue);

	bRet = CheckPallindrome(iValue);
	if(bRet == true)
	{
		printf("It is Pallindrome\n");
	}
	else
	{
		printf("It is not Pallindrome\n");
	}
	return 0;
}
