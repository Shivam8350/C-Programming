//Input : 3  3
//Output : 
/*    
	* * *
	* * *
	* * *
*/
#include<stdio.h>
void Pattern(unsigned int iRow,unsigned int icol)
{
	int i = 0 ,j = 0;
	printf("\n");
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=icol;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}
int main()
{
	unsigned int iValue1 = 0,iValue2 = 0;
	char cValue = '\0';

	printf("Enter Number of rows\n");
	scanf("%d",&iValue1);
	printf("Enter Number of Columns\n");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);

	return 0; 
}
