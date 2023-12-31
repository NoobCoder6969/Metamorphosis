//THIS IS JAVA
//THIS IS TO GIVE SMALL PP PEOPLE SOME ELATION
//I AM A NOOB CODER SO PLEASE IGNORE MY MISTAKES
//HOPE YOU'LL HAVE FUN
//I'M WRITING THOSE COMMENTS JUST TO INCREASE THE LINES OF MY CODE
import java.util.*;
class NoobCode
{
    public static void main(String[] args) throws Exception 
    {
        System.out.println("ooo, You're compiling? I've got something to show you \nWait for the end of this small pp code");
        delay();
        Chintu();
        System.out.println("reveal your first love..");
        delay();
        TM();
        System.out.println("Okay last one.");
        delay();
        PL();
        delay();
        end();
        rr();
        System.out.println("CIAO!");
    }

    static void Chintu()
    {
        Scanner pp=new Scanner(System.in);
        System.out.println("Do you like Chintu?\nYes/No");
        String choice=pp.next();
        choice=choice.toLowerCase();
        if(choice.equals("no"))
            System.out.println("Nice, seems like you actually are LEGIT \nLet's move further");
        else if(choice.equals("yes"))
            System.out.println("ugh, nvm Let's continue");
        else
        {
            System.out.println("at least pick a valid choice, you DipShit");
            Chintu();
        }
    }

    static void rr() throws Exception
    {
        java.awt.Desktop.getDesktop().browse(new java.net.URI("http://tiny.cc/6dsgvz"));
    }

    static void TM()
    {
        Scanner dk=new Scanner(System.in);
        System.out.println("Maduro/Trump");
        String ch=dk.next();
        ch=ch.toLowerCase();
        if(ch.equals("maduro"))
            System.out.println("ummm...I don't really care");
        else if(ch.equals("trump"))
            System.out.println("I really don't care");
        else
        {
            System.out.println("at least pick a valid choice, you DipShit");
            TM();
        }
    }

    static void PL()
    {
        Scanner pu=new Scanner(System.in);
        System.out.println("A/B");
        String cho=pu.next();
        cho=cho.toLowerCase();
        if(cho.equals("A"))
            System.out.println("I don't CARE");
        else if(cho.equals("B"))
            System.out.println("..., bruh");
        else
        {
            System.out.println("at least pick a valid choice, you DipShit");
            PL();
        }
    }

    static void end()
    {
        System.out.println("Niic, You played well \nNow Judging from your choices");
        System.out.println("You get your reward in 3..");
        delay();
        System.out.println("You get your reward in 2..");
        delay();
        System.out.println("You get your reward in 1..");
    }

    static void delay()
    {
        try {
            Thread.sleep(1000);
        } catch (InterruptedException ie) {
            Thread.currentThread().interrupt();
        }
    }
}