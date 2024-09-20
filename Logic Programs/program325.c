#include<stdio.h>

int main()
{
    unsigned int iNo=0;
    unsigned int iMask=0x00000120;
    unsigned int iResult=0;

    printf("Enter first number: \n");
    scanf("%u",&iNo);

    iResult=iNo & iMask;

    if(iResult==iMask)
    {
        printf("6th and 9th bits are ON\n");
    }
    else
    {
        printf("Bits are OFF\n");
    }

    return 0;
}