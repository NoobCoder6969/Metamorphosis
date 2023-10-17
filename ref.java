class ref
{
    void show(int a[])
    {
        a[1]=a[1]+2;
        for(int i=1;i<a.length;i++)
            System.out.println(a[i]);
    }

    static void main(String[]args)
    {
        int b[]={23,45,234,67};
        ref obj=new ref();
        obj.show(b);
        for(int i=1;i<=b.length;i++)
        {
            System.out.println(b[i]);   
        }
    }
}
