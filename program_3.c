#include<stdio.h>
int main()
{
    //formula A = 1/2*base*height
    int b,h,a;
    printf("Enter the base of a triangle: ");
    scanf("%d",&b);
    printf("Enter the height of a triangle: ");
    scanf("%d",&h);

    a= (((b*h)*1)/2);//no logical error
    printf("Area: %d",a);
    return 0;
}