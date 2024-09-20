#include<stdio.h>

float Addition(float fNo1, float fNo2)
{
    float fAns=0.0;
    fAns= fNo1 + fNo2;
    return fAns;
}
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