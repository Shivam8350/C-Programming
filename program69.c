#include<stdio.h>

void Display(char *str)
{
	printf("Characters from String are\n");

	while(*str != '\0')
	{
		printf("%c\n",*str);
		str++;
	}
}
int main()
{
	char Arr[40];

	printf("Enter Your Name\n");
	fgets(Arr,40,stdin);  
	
	Display(Arr);  //Display(100)

	return 0;
}