#include<stdio.h>

int UpdateString(char *str)
{
    while(*str != '\0')
    {
        str++;
    }
}

int main()
{
    char Arr[100];

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    UpdateString(Arr);

    printf("Updated string is %s\n",Arr);

    return 0;
}