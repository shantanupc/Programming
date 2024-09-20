#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;

    iCnt=1;
    while(iCnt<=iNo)
    {
        printf("Jay Hanuman...\n");
        iCnt++;
    }
}

int main()
{
    int iValue=0;

    printf("Enter how many times you want to display Jay Hanuman on screen: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}