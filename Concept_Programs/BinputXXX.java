import java.io.*;

class BinputXXX
{
    public static void main(String args[]) throws IOException
    {
        
            BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in));

            System.out.println("Enter first number: ");
            int No1=Integer.parseInt(bobj.readLine());

            System.out.println("Enter second number: ");
            int No2=Integer.parseInt(bobj.readLine());

            int Ans=No1+No2;
            System.out.println("Addition is: "+Ans);
    }
}