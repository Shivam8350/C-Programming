
// Accept 2 numbers from user and return the Maximum and Minimum Number.


//Include the user defined
#include"helper2.h"

int main()
{

	int iNo1 = 0;
	int iNo2 = 0;
	int iRet = 0;
	printf("Enter First Number");
	scanf("%d",&iNo1);

	printf("Enter Second Number");
	scanf("%d",&iNo2);

	iRet = Maximum(iNo1,iNo2);
	printf("Maximum Number is : %d\n",iRet);
	return 0;


}