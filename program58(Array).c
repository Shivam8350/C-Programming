
#include<stdio.h>
#include<stdlib.h>   // used to malloc and free 
void DisplayEven(int Arr[],int iSize)         //step 6
{
	int i = 0;
	if((Arr == NULL) || (iSize <=0))
	{
		return;
	}
	printf("Element from the array are:\n");
	for(i = 0;i<iSize;i++)
	{
		if((Arr[i] % 2) == 0)
		{
			printf("%d\n",Arr[i]);
		}
	}
}
int main()
{
	int*arr = NULL;                         //Step 1
	int iLength = 0,i = 0;

	printf("Enter the Number of elements\n"); //Step 2
	scanf("%d",&iLength);

	arr = (int*)malloc(iLength*sizeof(int));  //Step 3
	if(arr == NULL)
	{
		printf("Unable to allocate the memory\n");
		return -1;
	}
	
	printf("Enter the elements\n");           //Step 4
	for(i = 0;i<iLength;i++)
	{
		scanf("%d",&arr[i]);
	}

	DisplayEven(arr,iLength);                     //step 5

	free(arr);                                //Step 7
	return 0;
}
