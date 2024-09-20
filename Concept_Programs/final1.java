class Demo
{
    public int No1;
    public final int No2;

    public Demo()
    {
        No1=11;
        No2=21;
    }
}

class final1
{
    public static void main(String args[])
    {
        Demo obj=new Demo();

        obj.No1++;
        obj.No2++;
    }
}