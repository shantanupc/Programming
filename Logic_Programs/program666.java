import java.util.*;

class program666
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string: ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        for(char ch : Arr)
        {
            System.out.println(ch);
        }
    }
}