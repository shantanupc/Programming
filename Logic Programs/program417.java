class node
{
    public int data;
    public node next;
    public node prev;

    public node(int Value)
    {
        data = Value;
        next = null;
        prev = null;
    }
}

class DoublyCL
{
    public node First;
    public node Last;
    public int iCount;

    public DoublyCL()
    {
        System.out.println("Object of DoublyCL gets created successfully");
        First = null;
        Last = null;
        iCount = 0;
    }

    public void InsertFirst(int No)
    {
        node newn = null;

        newn = new node(No);

        if((First == null) && (Last == null))
        {
            First = newn;
            Last = newn;
        }
        else
        {
            newn.next = First;
            First.prev = newn;
            First = newn;
        }
        Last.next = First;
        First.prev = Last;
        iCount++;
    }

    public void InsertLast(int No)
    {
        node newn = null;

        newn = new node(No);

        if((First == null) && (Last == null))
        {
            First = newn;
            Last = newn;
        }
        else
        {
            newn.prev = Last;
            Last.next = newn;
            Last = newn;
        }
        Last.next = First;
        First.prev = Last;
        iCount++;
    }

    public void Display()
    {
        if((First == null) && (Last == null))
        {
            System.out.println("LL is empty");
            return;
        }
        else
        {
            System.out.println("Elements of LL are: ");
            
            System.out.print("<=>");
            do
            {
                System.out.print("| "+First.data+" |<=>");
                First = First.next;
            }while(First != Last.next);

            System.out.println();
        }
    }

    public int Count()
    {
        return iCount;
    }

    public void DeleteFirst()
    {
        if((First == null) && (Last == null))
        {
            return;
        }
        else
        {
            // Last.next = First.next;
            // First.next.prev = Last;

            First = First.next;
            First.prev = Last;
            Last.next = First;
        }
        iCount--;
    }

    public void DeleteLast()
    {
        if((First == null) && (Last == null))
        {
            System.out.println("LL is empty");
            return;
        }
        else if(First == Last)
        {
            First = null;
            Last = null;
        }
        else
        {
            Last = Last.prev;
            First.prev = Last;
            Last.next = First;
        }
        iCount--;
    }

    public void InsertAtPos(int No, int iPos)
    {   

    }

    public void DeleteAtPos(int iPos)
    {
        
    }
}

class program417
{
    public static void main(String Args[])
    {
       DoublyCL obj = new DoublyCL();
       int iRet = 0;

       obj.InsertFirst(51);
       obj.InsertFirst(21);
       obj.InsertFirst(11);

       obj.InsertLast(101);
       obj.InsertLast(121);

       obj.Display();
       iRet = obj.Count();
       System.out.println("Number of elements in LL are: "+iRet);

        obj.DeleteFirst();
        obj.DeleteLast();

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements in LL are: "+iRet);
    }
}