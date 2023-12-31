#include <stdio.h>
int main()
{
    int number, d, reverse=0;
    printf("Enter Your Number : ");
    scanf("%d",&number);
    int temporary = number;
    while(number!=0)
    {
        d=number%10;
        reverse=reverse*10+d;
        number/=10;
    }
    printf("The reverse of %d is %d",temporary,reverse);
}
