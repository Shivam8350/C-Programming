/*Accept Number and Display factors of that number
Input : 12
Output : 1  2  3  4  6

Input : 20
output : 1  2  4  5  10
*/

/*
Input : 6
Output : 1 2 3 6

if(6 % 1) == 0     1
if(6 % 2) == 0     2
if(6 % 3) == 0     3
if(6 % 4) == 0     --     if(iNo % __) == 0
if(6 % 5 ) == 0     --     End = 5
                          Start  = 1
                          Displacement = 1
*/

#include<stdio.h>
void Factor(int iNo)
{
	int iCnt = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			printf("%d\n",iCnt);
		}
	}
}

//Time Complexity : O(N)
//Time Complexity is only available looping i.e. For,While,do-While.

int main()
{
	int iValue = 0;

	printf("Enter Number\n");
	scanf("%d",&iValue);
	Factor(iValue);

	return 0;
}