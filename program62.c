#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength,int iValue)
{
    int iCnt = 0, i = 0;
    
    for(i = 0; i< iLength; i++)
    {
        if(Arr[i] == iValue)
        {
            iCnt++;
        }
    }
    return iCnt;
}
int main()
{
    int *arr = NULL;
    int i = 0, iSize = 0,iRet = 0,iNo = 0;
    
    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    arr = (int*)malloc(iSize*sizeof(int));
    
    printf("Enter the elements\n");
    for(i = 0; i<iSize; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element that you want to search\n");
    scanf("%d",&iNo);

    iRet = Frequency(arr,iSize,iNo);
    printf("Frequency is : %d\n",iRet);
    free(arr);
    return 0;
}
