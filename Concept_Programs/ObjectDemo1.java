
class Marvellous
{
    public int i,j;

    public Marvellous()
    {
        System.out.println("Marvellous Constructor");
    }

    protected void finalize()
    {
        System.out.println("Inside finalize method");
    }
}

class ObjectDemo1
{
    public static void main(String args[])
    {
        Marvellous mobj=new Marvellous();
        System.out.println(obj.hashCode());
        mobj=null;
        System.gc();
    }
}