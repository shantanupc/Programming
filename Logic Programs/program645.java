import java.util.*;

class program645
{
    public static void main(String Args[])
    {
        LinkedList <Integer>lobj = new LinkedList<Integer>();

        lobj.add(11);
        lobj.add(21);
        lobj.add(51);
        lobj.add(101);

        System.out.println(lobj);
        System.out.println("Number of elements: "+lobj.size());

        for(int no : lobj)
        {
            System.out.println(no);
        }
    }
}