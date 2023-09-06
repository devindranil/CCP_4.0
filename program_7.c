#include<stdio.h>
int main()
{
    float c, f;
    printf("Enter temperatur: \n");
    scanf("%f",&f);
    c=(f-32) * 5/9;
    printf("Temperatur(C): %f",c);
    return 0;
}