//this wasa problem asked in the book "Let us C" by "Yashwant Kanetkar". Chapter 2 [G] (c) 
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
double calculate_distance(float l1,float l2,float g1,float g2);
int main()
{
    float latitude1, latitude2, longitude1, longitude2;
    printf("Enter latitude of location 1 (in degrees) : ");
    scanf("%f",&latitude1);
    printf("Enter longitude of location 1 (in degrees) : ");
    scanf("%f",&longitude1);
    printf("Enter latitude of location 2 (in degrees) : ");
    scanf("%f",&latitude2);
    printf("Enter longitude of location 2 (in degrees) : ");
    scanf("%f",&longitude2);
    double distance = calculate_distance(latitude1, latitude2, longitude1, longitude2);
    printf("The Distance in nautical miles is = %f",distance);
    return 0;
}
double calculate_distance(float l1,float l2,float g1,float g2)
{
    double d = 3963*acos(sin(l1* (M_PI / 180.0))*sin(l2* (M_PI / 180.0))+cos(l1* (M_PI / 180.0))*cos(l2* (M_PI / 180.0))*cos((g2-g1)* (M_PI / 180.0)));
    return d;
}