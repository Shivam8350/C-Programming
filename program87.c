#include<stdio.h>

void strcpyX(const char src[],char dest[])
{
	if(src == NULL || dest == NULL)
	{
		return;
	}
	while(*src!='\0')
	{

        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src - 32;
        }
        else
        {
			*dest = *src;
		}
		src++;
		dest++;
	}
	*dest = '\0';
}
int main()
{
	char arr[20];
	char brr[20];

	printf("Enter String\n");
	scanf("%[^'\n']s",arr);

	strcpyX(arr,brr); //strcpy(100,200)

	printf("After copy string is :%s\n",brr);

	return 0;
}