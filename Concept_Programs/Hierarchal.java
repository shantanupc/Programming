
class Base
{
    public int A,B;
    public Base()
    {
        System.out.println("Base constructor");
    }
    public void Fun()
    {
        System.out.println("Inside Base fun");
    }
}

class Derived extends Base
{
    public int X,Y;
    public Derived()
    {
        System.out.println("Derived constructor");
    }
    public void Gun()
    {
        System.out.println("Inside Derived gun");
    }
}

class DerivedX extends Base
{
    public int P,Q;
    public DerivedX()
    {
        System.out.println("DerivedX constructor");
    }
    public void Sun()
    {
        System.out.println("Inside DerivedX sun");
    }
}

class Hierarchal
{
    public static void main(String Arg[])
    {
        Derived dobj1=new Derived();
        DerivedX dobj2=new DerivedX();

    }
}