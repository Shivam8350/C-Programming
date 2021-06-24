#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{    
    int i = 0,imin = 0;
    if(Arr == NULL)
    {
        return -1;
    }
    imin = Arr[0];
    for(i = 0; i< iLength; i++)
    {
        if(Arr[i] < imin)
        {
            imin = Arr[i];
        }
    }
    return imin;
}

int main()
{
    int *arr = NULL;
    int i = 0, iSize = 0,iRet = 0;
    
    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    arr = (int*)malloc(iSize*sizeof(int));
    
    printf("Enter the elements\n");
    for(i = 0; i<iSize; i++)
    {
        scanf("%d",&arr[i]);
    }

    iRet = Minimum(arr,iSize);
    printf("Smallest Value is : %d\n",iRet);

    free(arr);
    return 0;
}
