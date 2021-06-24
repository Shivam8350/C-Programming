//Input : Row = 4 Column = 4
//Output : 
/*   
                   *
               *   *
            *  *   *
        *   *  *   *


	4,1  4,2  4,3  4,4
	3,1  3,2  3,3  3,4 
	2,1  2,2  2,3  2,4
	1,1  1,2  1,3  1,4
	
*/
#include<stdio.h>
void pattern(int iRow,int iCol)
{
	int i=0,j=0;

	printf("\n");
	if(iRow != iCol)
	{
		return;
	}
	for(i=iRow;i>=1;i--)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i<=j)
			{
				printf("*\t");
			}
			else
			{
				printf(" \t");
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