
/*I'm just doing this to learn how to type a comment*/
#include <stdio.h>
int main()
{
    int celsius=0,fahrenheit=0, upper=300, lower=0, step=10;
    printf("Enter c to convert from Fahrenheit to Celsius and f to convert celsius to Farhenheit\n");
    char character = getchar();
    if(character == 'f'||character == 'F')
    {
        while(fahrenheit<=upper)
        {
            celsius=5*(fahrenheit-32)/9;
            printf("%d\t%d\n",fahrenheit,celsius);
            fahrenheit=fahrenheit+step;
        }
    }
    else if(character == 'c'||character == 'C')
    {
        while(celsius<=upper)
        {
            fahrenheit=(9*celsius/5)+32;
            printf("%d\t%d\n",celsius,fahrenheit);
            celsius=celsius+step;
        }
    }
    else
    {
        printf("Invalid Response");
    }
}                                                                                                                   
