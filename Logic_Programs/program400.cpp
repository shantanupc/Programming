#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef  struct node NODE;
typedef  struct node* PNODE;

class Queue
{
    private:
        PNODE First;
        int iCount;

    public:
        Queue();
        void Display();
        int Count();
        void EnQueue(int No);  //InsertLast()
        int DeQueue();          //DeleteFirst()
};

Queue::Queue()
{
    First = NULL;
    iCount = 0;
}

void Queue::Display()
{
    cout<<"Elements in the Queue are: "<<endl;
    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<"\n";
}

int Queue::Count()
{
    return iCount;
}

void Queue::EnQueue(int No)    //InsertFirst
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        temp = First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next =newn;
    }
    iCount++;
}

int Queue::DeQueue()    //DeleteFirst
{
    int iValue = 0;
    PNODE temp =NULL;

    if(First == NULL)
    {
        cout<<"Unable to remove the element as Queue is empty"<<endl;
        return -1;
    }
    else
    {
        temp = First;

        iValue = First->data;
        First = First->next;
        delete temp;
        
        iCount--;
    }
    return iValue;
}

int main()
{
    Queue obj;
    int iRet = 0;
    int iChoice = 0;

    cout<<"---------------Implementation of Queue-----------------\n";
    cout<<"Please select your choice: \n";
    cout<<"1 : Insert new element in Queue\n";
    cout<<"2 : Remove the element from Queue\n";
    cout<<"3 : Display the elements from Queue\n";
    cout<<"4 : Count number of element in Queue\n";
    cout<<"5 : Exit\n";
    cin>>iChoice;

    switch(iChoice)
    {
        case 1:
            cout<<"Enter the elements that you want to insert: \n";
            cin>>iNo;
            obj.EnQueue(iNo);
            break;

        case 2:
            

        case 3:
            obj.Display();

        case 4:
            obj.Count();

        case 5:
            
    }

    return 0;
}