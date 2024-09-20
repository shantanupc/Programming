#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name:  Addition
//  Description:    It is used to perform addition of 2 floats
//  Input:          Float, Float
//  Output:         Float
//  Author:         Shantanu Pradip Chimote
//  Date:           15/04/2024
//
//////////////////////////////////////////////////////////////////

float Addition(float fNo1, float fNo2)
{
    float fAns=0.0;
    fAns= fNo1 + fNo2;
    return fAns;
}

/////////////////////////////////////////////////////////////////
//  Function name: main
//  Description: Its a entry point function
/////////////////////////////////////////////////////////////////
int main()
{
    float fValue1=0.0, fValue2=0.0;
    float fResult=0.0;

    printf("Enter first number: \n");
    scanf("%f", &fValue1);

    printf("Enter second number: \n");
    scanf("%f", &fValue2);

    fResult=Addition(fValue1, fValue2);

    printf("Addition is: %f\n",fResult);
    
    return 0;
}