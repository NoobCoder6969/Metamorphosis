class udm
{
    void show(int x,int y)
    {
        x=x+2;
        y=y+2;
        System.out.println("xy"+x+""+y);
    }

    public static void main(String[]args)
    {
        int a=5,b=6;
        udm obj=new udm();
        obj.show(a,b);
        System.out.println(a+""+b);
    }
}
