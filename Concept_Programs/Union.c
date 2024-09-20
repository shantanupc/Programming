#include<stdio.h>

#pragma pack(1)
struct Demo
{
    int no;
    float f;
    int data;
    char ch;
};

union Hello
{
    int no;
    float f;
    int data;
    char ch;
};

int main()
{
    struct Demo dobj;
    union Hello hobj;

    printf("Size of structure is: %d\n",sizeof(dobj));
    printf("Size of Union is: %d\n",sizeof(hobj));

    hobj.no=11;
    printf("%d\n",hobj.no);

    hobj.data=21;
    printf("%d\n",hobj.no);
    printf("%d\n",hobj.data);

    return 0;
}