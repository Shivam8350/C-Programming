//Accept N number from user and Display Addition of N number

//Accept N number from Use and Display that number

#include<stdio.h>
#include<stdlib.h>
int SumElement(int Arr[],int iSize)         //step 6
{
	int iSum = 0,i = 0;
	
	for(i = 0;i<iSize;i++)
	{
		iSum = iSum + Arr[i];
	}
	return iSum;
}
int main()
{
	int*arr = NULL;                         //Step 1
	int iLength = 0,i = 0,iRet = 0;

	printf("Enter the Number of elements\n"); //Step 2
	scanf("%d",&iLength);

	arr = (int*)malloc(iLength*sizeof(int));  //Step 3

	printf("Enter the elements\n");           //Step 4
	for(i = 0;i<iLength;i++)
	{
		scanf("%d",&arr[i]);
	}

	iRet = SumElement(arr,iLength);                     //step 5

	printf("Summation of elements is : %d\n",iRet);
	free(arr);                                //Step 7
	return 0;
}
