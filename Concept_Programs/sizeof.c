#include<stdio.h>

int main()
{
    char ch='A';            //1 byte
    int i=11;               //4 bytes
    float f=90.89;          //4 bytes
    double d=90.768459;     //8 bytes
    
    int Arr[5];             //20 bytes
    double Brr[5];          //40 bytes
    float Crr[5];           //20 bytes
    char Drr[5];            //5 bytes

    printf("%d\n",sizeof(ch));
    printf("%d\n",sizeof(i));
    printf("%d\n",sizeof(f));
    printf("%d\n",sizeof(d));

    printf("%d\n",sizeof(Arr));
    printf("%d\n",sizeof(Brr));
    printf("%d\n",sizeof(Crr));
    printf("%d\n",sizeof(Drr));

    return 0;
}