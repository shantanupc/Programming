#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
        newn->next = *First;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
    (*Last)->next = *First;
}

void InsertLast(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        (*Last)->next = newn;
        *Last = newn;
    }
    (*Last)->next = *First;
}

void Display(PNODE First, PNODE Last)
{
    if((First == NULL) && (Last == NULL))
    {
        printf("LinkedList is empty\n");
        return;
    }

    do
    {
        printf("| %d |->",First->data);
        First = First->next;
    }while(First != Last->next);
}

int Count(PNODE First, PNODE Last)
{
    int iCount = 0;

    if((First == NULL) && (Last == NULL))
    {
        printf("LinkedList is empty\n");
        return;
    }

    printf("\n");
    do
    {
        iCount++;
        First = First->next;
    }while(First != Last->next);

    return iCount;
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    if((*First == NULL) && (*Last == NULL)) //Empty LL
    {
        return;
    }
    else if(*First == *Last)    //Single node
    {
        free(*First);
       *First = NULL;
       *Last = NULL;
    }
    else        //More than one node
    {
        *First = (*First)->next;
        free((*Last)->next);
        (*Last)->next = *First;

        //This also working:
        // (*Last)->next = (*First)->next;
        // free(*First);
        // *First = (*Last)->next;
    }
}

void DeleteLast(PPNODE First, PPNODE Last)
{
    PNODE temp = *First;

    if((*First == NULL) && (*Last == NULL)) //Empty LL
    {
        return;
    }
    else if(*First == *Last)    //Single node
    {
        free(*First);
       *First = NULL;
       *Last = NULL;
    }
    else        //More than one node
    {
        while(temp->next != *Last)
        {
            temp = temp->next;
        };

        free(*Last);
        *Last = temp;
        (*Last)->next = *First;
    }
}

void InsertAtPos(PPNODE First, PPNODE Last, int No, int iPos)
{
    PNODE temp = *First;

    int i=0;
    int iLength = 0;

    iLength = Count(*First, *Last);

    if((iPos < 1) || (iPos > iLength+1))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(First, Last, No);
    }
    else if(iPos == iLength+1)
    {
        InsertLast(First, Last, No);
    }
    else
    {   
        PNODE newn = NULL;

        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;

        for(i=1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE First, PPNODE Last, int iPos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;
    int i=0;
    int iLength = 0;

    iLength = Count(*First, *Last);

    if((iPos < 1) || (iPos > iLength))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(First, Last);
    }
    else if(iPos == iLength)
    {
        DeleteLast(First, Last);
    }
    else
    {   
        temp1 = *First;

        for(i=1; i < iPos-1; i++)
        {
            temp1 = temp1->next;
        }

        temp2 = temp1->next;

        temp1->next = temp2->next;
        free(temp2);
    }
}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

    InsertFirst(&Head,&Tail,51);
    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,11);

    InsertLast(&Head,&Tail,101);
    InsertLast(&Head,&Tail,111);
    InsertLast(&Head,&Tail,121);

    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of elements are: %d\n",iRet);

    DeleteFirst(&Head,&Tail);

    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of elements are: %d\n",iRet);

    DeleteLast(&Head,&Tail);
    
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of elements are: %d\n",iRet);

    InsertAtPos(&Head,&Tail,151,4);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of elements are: %d\n",iRet);

    DeleteAtPos(&Head,&Tail,4);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of elements are: %d\n",iRet);

    return 0;
}