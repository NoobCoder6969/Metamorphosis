#include <stdio.h>
int main()
{
    int number,num;
    printf("Enter your number ");
    scanf("%d",&number);
    while(number>=10)
    {
        number = sumdigits(number);
    }
    printf("Your Final Number is : %d\n",number);
}
int sumdigits(int num)
{
    int sum=0;
    while(num!=0)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}
