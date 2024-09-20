#include<stdio.h>

int CountOne(int iNo)
{
    int iDigit=0;
    int iCount=0;

    printf("Binary conversion is \n");

    while(iNo!=0)
    {
        iDigit=iNo%2;
        if(iDigit==1)
        {

        }
        iNo=iNo/2;
    }

    printf("\n");
}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter number: \n");
    scanf("&d",&iValue);

    iRet=CountOne(iValue);

    printf("Number of one's are: %d\n",iRet);

    return 0;
}