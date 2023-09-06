#include<stdio.h>
#include<math.h>
void main()
{
    float p, t, r, ci;

    printf("Enter the Principle Amount: \n");
    scanf("%f",&p);
    printf("Enter the Time: \n");
    scanf("%f",&t);
    printf("Enter the Rate of Interest: \n");
    scanf("%f",&r);

    ci = p * (pow(1+(r/100),t));
    printf("S.I = %f\n",ci);
    printf("Total amount with interset = %f",(ci+p));

}