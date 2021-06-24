#include<stdio.h>

int strlenX(char str[])
{
	int iCnt = 0;
	while(*str != '\0')
	{
		printf("%d : %c :%d\n",iCnt,*str,*str);
		iCnt++;
		str++;
	}
	return iCnt;
}
int main()
{
	char Arr[40];
	int iRet = 0;
	printf("Enter Your Name\n");
	scanf("%[^'\n']s",Arr);
	//fgets(Arr,40,stdin);  
	
	iRet = strlenX(Arr); 
	printf("String length is : %d\n",iRet);

	return 0;
}