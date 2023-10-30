//This program calculates the sum of digits of a number
#include <stdio.h>
int digits(int n);
int main()
{
    int number;
    printf("Enter a Number : ");
    scanf("%d",&number);
    int sum=digits(number);
    printf("Sum of Digits : %d",sum);
    return 0; 
}
int digits(int n)
{
    int sum=0;
    while (n!=0)
    {
        sum=sum+n%10;
        n/=10;
    }
    return sum;
}