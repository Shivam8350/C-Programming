#include<stdio.h>

int CountA(char *str)
{
	int iCnt = 0;
	if(str == NULL)
	{
		return 0;
	}

	while(*str != '\0')
	{
		if((*str == 'a') || (*str == 'A'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt++;
}
int main()
{
	char Arr[40];
	int iRet = 0;

	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	iRet = CountA(Arr);
	printf("Frequency of a and A is : %d\n",iRet);
	return 0;
}