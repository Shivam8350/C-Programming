//Input : 5
//Output : 5 * 4 * 3 * 2 *1 *
#include<stdio.h>
void Pattern(unsigned int iNo)
{
	int iCnt;
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		printf("*\t%d\t",iCnt);
	}
	
}
int main()
{
	unsigned int iValue = 0;
	printf("Enter Number\n");
	scanf("%d",&iValue);

	Pattern(iValue);

	return 0; 
}


