#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt=0;
    long int iFact=1;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        iFact=iFact*iCnt;
    }
    return iFact;
}

int main()
{
    int iValue=0;
    long int iRet=0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial is: %ld\n",iRet);

    return 0;
}