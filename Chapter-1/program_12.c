#include<stdio.h>
#include<math.h>
int main()
{
    float s,r;
    printf("Enter the value of s(side): \n");
    scanf("%f",&s);
    r= (sqrt(3)/4)*(s*s);
    printf("Result: %f",r);
    return 0;
}