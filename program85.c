#include<stdio.h>

void strrev(char src[],char dest[])
{
	int iCnt = 0;
	if(src == NULL || dest == NULL)
	{
		return;
	}
	while(*src!='\0')
	{
		src++;
		iCnt++;
	}
	src--;
	while(iCnt>0)
	{
		*dest = *src;
		src--;
		dest++;
		iCnt--;
	}
	*dest ='\0';
}
int main()
{
	char arr[20];
	char brr[20];

	printf("Enter String\n");
	scanf("%[^'\n']s",arr);

	strrev(arr,brr); //strcpy(100,200)

	printf("Reverse string is :%s\n",brr);

	return 0;
}