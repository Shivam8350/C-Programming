//Input : Row = 4 Column = 4
//Output : 
/*    A 
	  A B 
	  A B C 
	  A B C D
	
*/
#include<stdio.h>
void pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char ch = '\0';

	printf("\n");
	if(iRow != iCol)
	{
		return;
	}
	for(i=1;i<=iRow;i++)
	{
		for(j=1,ch = 'A';j<=iCol;j++,ch++)
		{
			if(i>=j)
			{
				printf("%c\t",ch);
			}
		}
		printf("\n");
    }
}
int main()
{
	int iValue1 = 0;
	int iValue2 = 0;

	printf("Enter Number of Rows\n");
	scanf("%d",&iValue1);
	printf("Enter Number of column\n");
	scanf("%d",&iValue2);

	pattern(iValue1,iValue2);

	return 0;
}