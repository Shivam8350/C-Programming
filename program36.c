//4
//-4 -3 -2 -1 0 1 2 3 4
#include<stdio.h>
int Frequency(int iNo)
{
  int iCnt = 0;
  if(iNo <0)
  {
    iNo = -iNo;
  }
  printf("\t");
  for(iCnt = -iNo;iCnt<=iNo;iCnt++)
  {
      printf("%d\n",iCnt);
  }
  printf("\t");
}

int main()
{
    int iValue1 = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    Frequency(iValue1);
    
    return 0;
}
