#include<stdio.h>

void DisplayBinary(unsigned int iNo)
{
	unsigned int iDigit = 0;
	while(iNo > 0)
	{
		iDigit = iNo % 2;
		printf("%u\t",iDigit);
		iNo = iNo / 2;
	}
}
int main()
{
	unsigned int iValue = 0; //In Case of Unsignned int we use all 32 bits..and in case of signed bit we use only 31 bit and 1 bit for sign 

	printf("Enter Number\n");
	scanf("%u",&iValue);

	DisplayBinary(iValue);

	return 0;
}