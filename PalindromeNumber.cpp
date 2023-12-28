#include <iostream>
using namespace std;
int main()
{
    int number;
    printf("Enter your number : ");
    scanf("%d", &number);
    int temp = number, d, reverse=0;
    while(number!=0)
    {
        d = number%10;
        reverse = reverse * 10 + d;
        number=number/10;
    }
    if (temp==reverse)
        printf("The number '%d' and it's reverse '%d' are equal", temp, reverse);
    else
        printf("The number '%d' and it's reverse '%d' are not equal", temp, reverse);
}
