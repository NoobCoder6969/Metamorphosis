import java.util.*;
class rev
{
    static void main()
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter a line");
        String s=""+in.nextLine()+" ";
        String word="",sen="";
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            if(ch!=' ')
                word=word+ch;
            else
            {
                sen=word+sen;
                word="";
            }
        }
        System.out.println(sen);
    }
}
