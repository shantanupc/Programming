#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[], int iSize)
{
    int i=0;
    int iSum=0;

    for(i=0; i<iSize; i++)
    {
        iSum= iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    int iCount=0, i=0, iRet=0;
    int *Brr=NULL;

    printf("Enter number of elements that you want: \n");
    scanf("%d",&iCount);

    Brr=(int *)malloc(iCount * sizeof(int));

    printf("Enter the elements: \n");
    for(i=0; i<iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    printf("Entered elements are: \n");
    for(i=0; i<iCount; i++)
    {
        printf("%d\n", Brr[i]);
    }

    iRet=Addition(Brr,iCount);
    printf("Addition is: %d\n",iRet);

    free(Brr);
    
    return 0;    
}