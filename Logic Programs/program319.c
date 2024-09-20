#include<stdio.h>

int main()
{
    unsigned int iNo=0;
    unsigned int iMask=136;
    unsigned int iResult=0;

    printf("Enter first number: \n");
    scanf("%u",&iNo);

    iResult=iNo & iMask;

    if(iResult==iMask)
    {
        printf("4th and 8th bits are ON\n");
    }
    else
    {
        printf("Bits are OFF\n");
    }

    return 0;
}