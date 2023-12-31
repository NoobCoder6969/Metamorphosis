#include <stdio.h>
int main()
{
    double length, breadth, radius;
    printf("Enter length of rectangle\n");
    scanf("%lf",&length);
    printf("Enter breadth of rectangle\n");
    scanf("%lf",&breadth);
    printf("Enter radius of Circle\n");
    scanf("%lf",&radius);
    double rectangle_area, perimeter, circle_area, circumference;
    rectangle_area = length*breadth;
    perimeter = 2*length + 2*breadth;
    circle_area = 3.14*radius*radius;
    circumference = 2*3.14*radius;
    printf("Area of Rectangle = %lf\n",rectangle_area);
    printf("Perimeter of Rectangle = %lf\n",perimeter);
    printf("Area of Circle = %lf\n",circle_area);
    printf("Circumference of Circle = %lf\n",circumference);
    return 0;
}
