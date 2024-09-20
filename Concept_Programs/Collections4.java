//Hashtable

import java.util.*;

class Collections4
{
    public static void main(String args[])
    {
        Hashtable<String, Integer> hobj=new Hashtable<String, Integer>();

        hobj.put("PPA",19500);
        hobj.put("LB",20000);
        hobj.put("Python",20500);
        hobj.put("Angular",21000);

        System.out.println(hobj.get("Python"));
    }
}