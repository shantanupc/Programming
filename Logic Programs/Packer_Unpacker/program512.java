import java.util.*;
import java.io.*;

class program512
{
    public static void main(String Args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("--------Marvellous Packer Unpacker CUI Module--------");
        
        System.out.println("Enter File Name that you want to open for writing: ");
        String File_Name = sobj.nextLine();

        File fobj = new File(File_Name);

        if(fobj.exists())
        {
            FileInputStream fiobj = new FileInputStream(fobj);

            byte Arr[] = new byte[20];

            fiobj.read(Arr);
            String str = new String(Arr);
            System.out.println("Data from file is: "+str);

            fiobj.read(Arr);
            str = new String(Arr);
            System.out.println("Data from file is: "+str);
        }
        else
        {
            System.out.println("There is no such file");
        }
    }
}