//Input : 4  4
//Output : 
/*    
	1 2 3 4
	* * * *
	1 2 3 4
	* * * *
*/
#include<stdio.h>
void pattern(int iRow,int iCol)
{
	int i=0,j=0;
	printf("\n");
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((i % 2) == 0)
			{
			printf("*\t");
		    }
		    else
		    {
		    	printf("%d\t",j);
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