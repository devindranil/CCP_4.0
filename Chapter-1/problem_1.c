#include<stdio.h>
#include<math.h>
int main()
{
    double length, width, a , b, c, s, rectangularArea, triangleArea, totalArea;

    printf("Enter the length of rectangle area: \n");
    scanf("%lf", &length);
    printf("Enter the widht of rectangle area: \n");
    scanf("%lf", &width);

    rectangularArea = (length*width);

    printf("Enter the side of a of Triangle Area: \n");
    scanf("%lf",&a);
    printf("Enter the side of b of Triangle Area: \n");
    scanf("%lf",&b);
    printf("Enter the side of c of Triangle Area: \n");
    scanf("%lf",&c);

    s=(a+b+c)/2;
    triangleArea = sqrt(s*(s-a)*(s-b)*(s-c));

    totalArea = rectangularArea + triangleArea;
    printf("The total area of Makaut campus is: %lf",totalArea);

    return 0;
}