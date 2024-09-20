#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo)
{
    iResult=iNo & iMask;

    if(iResult==iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    unsigned int iValue=0;
    bool bRet=false;

    printf("Enter first number: \n");
    scanf("%u",&iNo);

    bRet=CheckBit(iValue);

    if(bRet==true)
    {
        printf("4th bit is ON\n");
    }
    else
    {
        printf("4th bit is OFF\n");
    }

    return 0;
}