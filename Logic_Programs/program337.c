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

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;

    //Step1 : Allocate dynamic memory for new node
    newn = (PNODE)malloc(sizeof(NODE));

    //Step2 : Initialise ther new node
    newn->data = No;
    newn->next = NULL;

    //Step 3 : Check is linked list is empty
    if(*First == NULL)
    {
        *First = newn;
    }
    else    //If linked list contains atleast one node in it
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{

}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    return 0;
}