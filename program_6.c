#include<stdio.h>
int main()
{
    float c, f;
    printf("Enter temperatur: \n");
    scanf("%f",&c);
    f=((c*9/5)+32);
    printf("Temperatur(F): %f",f);
    return 0;
}