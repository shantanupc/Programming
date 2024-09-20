#include<stdio.h>

int main()
{
    int Standard=0;

    printf("Enter your standard: \n");
    scanf("%d",&Standard);

    if(Standard==1)
    {
        printf("Your exam is at 7AM\n");
    }
    else if(Standard==2)
    {
        printf("Your exam is at 8AM\n");
    }
    else if(Standard==3)
    {
        printf("Your exam is at 9AM\n");
    }
    else if(Standard==4)
    {
        printf("Your exam is at 10AM\n");
    }
    else
    {
        printf("Wrong standard\n");
    }
    return 0;
}