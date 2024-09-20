#include<stdio.h>

int strlenSmallX(char *str)
{
    int iCnt=0;

    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    iRet=strlenSmallX(Arr);

    printf("Number of small letters are: %d\n",iRet);

    return 0;
}