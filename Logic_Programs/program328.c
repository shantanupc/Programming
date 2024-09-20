#include<stdio.h>

int main()
{
    unsigned int iNo=0;
    unsigned int iMask=0xffff7fff;
    unsigned int iResult=0;

    printf("Enter first number: \n");
    scanf("%u",&iNo);

    iResult=iNo & iMask;

    printf("Updated number is: %u\n",iResult);

    return 0;
}

// 0000     0000    0000    0000    0000    0000    0000    0000
// 0        0       0       0       0       c       0       0
// 0x00000c00