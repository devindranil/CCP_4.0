//C program to find LCM of two numbers
/**
 *Example
Input
Input number1: 12
Input number2: 30
Output
LCM = 60
 * 
 */

#include <stdio.h>
int main()
{
    int n1, n2, max,lcm;
    printf("Enter 1st positive integers: \n");
    scanf("%d", &n1);
    printf("Enter 2nd positive integers: \n");
    scanf("%d", &n2);

    if(n1>n2){
        max = n1;
    }else{
        max=n2;
    }

    while (1)
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            lcm=max;
            break;
        }
        max++;
    }
    printf("LCM = %d", lcm);
    return 0;
}