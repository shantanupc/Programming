#include<stdio.h>

int main()
{
    unsigned int iNo=0;
    unsigned int iMask=32;
    unsigned int iResult=0;

    printf("Enter first number: \n");
    scanf("%u",&iNo);

    iResult=iNo & iMask;

    if(iResult==iMask)
    {
        printf("6th bit is ON\n");
    }
    else
    {
        printf("6th bit is OFF\n");
    }

    return 0;
}