class Zion
{
    public static void main(String[]args)
    {
        bday(31,1,"January");
        bday(29,2,"February");
        bday(31,3,"March");
        bday(30,4,"April");
        bday(31,5,"May");
        bday(30,6,"June");
        bday(31,7,"July");
        bday(31,8,"August");
        bday(30,9,"September");
        bday(31,10,"October");
        bday(30,11,"November");
        bday(31,12,"December");
    }
    static void bday(int day, int monthnum, String Month)
    {
        for(double i=1;i<=day;i++)
        {
            if(i%monthnum==0&&i/monthnum==4)
            System.out.println(Month+i);            
        }
    }
}



