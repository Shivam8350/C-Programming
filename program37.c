#include<stdio.h>
void Pattern(unsigned int iNo)
{
	int iCnt;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("*\t#\t");
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


