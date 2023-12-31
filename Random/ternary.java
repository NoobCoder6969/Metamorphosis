class ternary
{
    public static void main(String[] args)
    {
        int a=7;
        a+= a++ + ++a + a-- + --a;
        System.out.println(a);
        System.out.println("CABLE".compareTo("CADET"));
        int c=4;
        int b=17;
   
        while(c!=b){
            System.out.println("inf");
            if(c>b)
            c=c-b;
            else
            c=b-c;
        }
        System.out.println(c);
    }
}