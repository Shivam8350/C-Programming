/*
0 to 35    Fail
35 to 50   pass class
40 to 60   Second Class
60 to 70   First Class
70 to 100  Distinction
*/

/*&& Means Both Condition Must be true.
|| Means If we consider two condition  then one codition is true then also coditiona is true 
*/ 
#include<stdio.h>

void CheckResult(int iMarks)
{
	if((iMarks<=0) || (iMarks > 100))  //Input Filter
	{
		printf("Invalid Marks\n");
		return;
	}
	if((iMarks >= 0) && (iMarks < 35))
	{
		printf("You are Failed\n");
	}
	else if((iMarks >= 35) && (iMarks < 50))
	{
		printf("Second class\n");
	}
	else if((iMarks >= 60) && (iMarks < 70))
	{
		printf("First class\n");
	}
	else
	{
		printf("Disnation");
	}
}
int main()
{
	int iValue = 0;

	printf("Enter Your Marks\n");
	scanf("%d",&iValue);

	CheckResult(iValue);

	return 0;
}
