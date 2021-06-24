//Input : 5 A
//Output : A A A A A
#include<stdio.h>
void Pattern(unsigned int iNo)
{
	int iCnt;
	char ch ='A';
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%c\t",ch);
		ch++;	
	}
}
int main()
{
	unsigned int iValue = 0;
	char cValue = '\0';

	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	Pattern(iValue);

	return 0; 
}


