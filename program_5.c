#include<stdio.h>
int main()
{
    float area, diameter, radius, circumference;
    //are = pi*r^2
    //diameter = 2r
    //circumference = 2pir
    //pi=3.14

    printf("Enter the radius: ");
    scanf("%f",&radius);

    diameter = 2*radius;
    circumference = 2*3.14*radius;
    area = 3.14*radius*radius;

    printf("The radius is: %f\n",radius);
    printf("diameter: %.2f\n",diameter);
    printf("circumference: %.2f\n",circumference);
    printf("area: %.2f",area);


    return 0;
}