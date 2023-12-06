//This program calculates the sum of digits of a number
#include <stdio.h>
#include <math.h>
float wcf(float t,float v);
int main()
{
    float temperature, velocity;
    printf("Enter Temperature : ");
    scanf("%f",&temperature);
    printf("Enter Velocity : ");
    scanf("%f",&velocity);
    printf("The Wind Chill Factor is : %f", wcf(temperature, velocity));
    return 0;
}
float wcf(float t,float v)
{
    double factor = 35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
    return factor;
}