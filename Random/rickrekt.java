public class rickrekt
{
    int sum(int ... n){//thi is

        int sum = 0;

        for(int k: n){//this is the foreach loop

            sum += k;

        }
        
        return sum;

    }

    public static void main(){

        rickrekt op = new rickrekt();

        System.out.println(op.sum(69,420,80085));

    }
}