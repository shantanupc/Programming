#include<stdio.h>

int main()
{
    unsigned int iNo1=0, iNo2=0, iRet=0;

    printf("Enter first number: \n");
    scanf("%u",&iNo1);

    printf("Enter second number: \n");
    scanf("%u",&iNo2);

    iRet=iNo1 | iNo2;

    printf("Result of bitwise |: %u\n",iRet);

    return 0;
}