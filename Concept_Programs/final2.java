class Base
{
    public void fun()
    {
        System.out.println("Inside base fun");
    }
    public final void gun()
    {
        System.out.println("Inside base gun");
    }
}

class Derived extends Base
{
    public void fun()
    {
        System.out.println("Inside derived fun");
    }
    public void gun()
    {
        System.out.println("Inside derived gun");
    }
}

class final2
{
    public static void main(String args[])
    {
        
    }
}