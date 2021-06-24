#include<stdio.h>

void strcatX(char src[],char dest[])
{
	if(src == NULL || dest == NULL)
	{
		return;
	}
	while(*dest!='\0')
	{
		dest++;
	}
	while(*src!='\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}
int main()
{
	char arr[20];
	char brr[20];

	printf("Enter First String\n");
	scanf("%[^'\n']s",arr);
	printf("Enter Second String\n");
	scanf(" %[^'\n']s",brr);

	strcatX(arr,brr);

	printf("After concat string is :%s\n",brr);

	return 0;
}