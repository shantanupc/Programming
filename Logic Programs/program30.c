#include<stdio.h>

////////////////////////////////////////////////////////////////
//
//  Function Name:  CalculateTicket
//  Description:    Used to display ticket price based on age
//  Input:          Integer
//  Output:         Integer
//  Author:         Shantanu Pradip Chimote
//  Date:           29/04/2004
//
////////////////////////////////////////////////////////////////
int CalulateTicket(int iAge)
{
    if((iAge>=0)&&(iAge<=4))
    {
        return 0;
    }
    else if((iAge>4)&&(iAge<=10))
    {
        return 900;
    }
    else if((iAge>10)&&(iAge<=50))
    {
        return 2000;
    }
    else if(iAge>50)
    {
        return 500;
    }
}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter the age: \n");
    scanf("%d",&iValue);

    iRet=CalulateTicket(iValue);
    printf("Your ticket price is: %d",iRet);

    return 0;
}