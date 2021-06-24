#include<stdio.h>

void Display(char str[])
{
	int iCnt = 0;
	printf("Characters from String are\n");

	for(iCnt=0;str[iCnt]!='\0';iCnt++)
	{
		printf("%c\n",str[iCnt]);
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