class rickrektagain
{
    public static void main(String[]args){

        rickrekt op = new rickrekt();

        System.out.println(op.sum(new int[]{420,69,69420}));//this is an anonymous array more like incognito arrray

    }
    int sum(int n[]){//thi is

        int sum = 0;

        for(int k: n){//this is the foreach loop

            sum += k;

        }
        
        return sum;

    } 
}