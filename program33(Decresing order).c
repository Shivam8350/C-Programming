#include<stdio.h>
int Factor(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {iNo = -iNo; }
   for(iCnt = iNo/2;iCnt>=1;iCnt--)
   {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
   }
}

int main()
{
    int iValue1 = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    Factor(iValue1);
    
    return 0;
}