#include<stdio.h>
#include<stdbool.h>

bool CheckOccurence(char *str)
{
    bool bFlag=false;

    while(*str != '\0')
    {
        if((*str == 'w') || (*str == 'W'))
        {
            bFlag=true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[100];
    bool bRet=false;

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    bRet=CheckOccurence(Arr);

    if(bRet == true)
    {
        printf("w is present in string\n");
    }
    else
    {
        printf("w is not present in string\n");
    }

    return 0;
}