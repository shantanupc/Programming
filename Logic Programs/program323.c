#include<stdio.h>

int main()
{
    unsigned int iNo=0;
    unsigned int iMask=0x00000100;
    unsigned int iResult=0;

    printf("Enter first number: \n");
    scanf("%u",&iNo);

    iResult=iNo & iMask;

    if(iResult==iMask)
    {
        printf("9th bit is ON\n");
    }
    else
    {
        printf("9th bit is OFF\n");
    }

    return 0;
}