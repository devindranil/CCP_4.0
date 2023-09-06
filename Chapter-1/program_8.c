#include<stdio.h>
#include<math.h>
int main()
{
    // 5 and 2
    float base, power, result;
    /*printf("Enter the value: \n");
    scanf("%d%d",&base, &power);*/
    printf("Enter value: ");
    scanf("%f",&base);
    printf("Enter value: ");
    scanf("%f",&power);
    result = pow(base,power);
    printf("Result: %.1f",result);
    return 0;
}