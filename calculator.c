#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    double num1, num2, result;
    char operator[5];
    printf("Enter First number : ");
    scanf("%lf", &num1);
    printf("Enter operator (+, - , *, /, %%, sqrt, sin, cos, tan, cosec, sec, cot) : ");
    scanf("%s", operator);
    if(operator[0]!='s'&& operator[0]!='c'&&operator[0]!='t')
    {
        printf("Enter Second number : ");
        scanf("%lf", &num2);
        switch(operator[0])
        {
            case '+':
            printf("The sum is = %f",num1+num2);
            break;
            case '-':
            printf("The difference is = %f",num1-num2);
            break;
            case '*':
            printf("The product is = %f",num1*num2);
            break;
            case '/':
            printf("The division is = %f",num1/num2);
            break;
            case '%':
            printf("The modulus is = %f",fmod(num1,num2));
            break;
        }
    }
    else
    {
        if(strcmp(operator,"sin")==0)
        printf("The sine is = %f",sin(num1));
        else if(strcmp(operator,"cos")==0)
        printf("The cos is = %f",cos(num1));
        else if(strcmp(operator,"tan")==0)
        printf("The tangent is = %f",tan(num1));
        else if(strcmp(operator,"cosec")==0)
        printf("The cosecant is = %f",1/(sin(num1)));
        else if(strcmp(operator,"sec")==0)
        printf("The secant is = %f",1/cos((num1)));
        else if(strcmp(operator,"cot")==0)
        printf("The cotangent is = %f",1/(tan(num1)));
        else if(strcmp(operator,"sqrt")==0)
        printf("The square root is = %f",sqrt(num1));
        else
        printf("Wrong choice");
    }
}