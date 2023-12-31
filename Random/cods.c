//This program receives cartesian co-ordinates (x,y) and converts them to polar coordinates (r,θ)
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
void Cartesian_toPolar(int a,int b, double *root, double *theta);
int main()
{
    int x,y;
    double root, theta;

    printf("Enter x co-ordinate: ");
    scanf("%d", &x);
    
    printf("Enter y co-ordinate: ");
    scanf("%d", &y);

    printf("The Cartesian Co-ordinates are : (%d,%d)\n",x,y);
    Cartesian_toPolar(x,y, &root, &theta);
    printf("The Polar Co-ordinates are : (%.2f,%.2f)\n",root,theta);  
    return 0;  
}
void Cartesian_toPolar(int a, int b, double *root, double *theta)
{
    *root = sqrt(pow(a,2)+pow(b,2));
    *theta = atan((double)b/(double)a)*180/M_PI;
}