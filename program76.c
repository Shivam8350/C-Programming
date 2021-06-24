#include<stdio.h>

int Countsmall(char *str)
{
	int iCnt = 0;
	if(str == NULL)
	{
		return 0;
	}

	while(*str != '\0')
	{
		if(*str == ' ')
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
	
	iRet = Countsmall(Arr);
	printf("Frequency of whitespace is : %d\n",iRet);
	return 0;
}