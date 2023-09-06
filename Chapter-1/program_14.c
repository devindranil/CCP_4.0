#include<stdio.h>
int main()
{
    float p, t, r, si;

    printf("Enter the Principle Amount: \n");
    scanf("%f",&p);
    printf("Enter the Time: \n");
    scanf("%f",&t);
    printf("Enter the Rate of Interest: \n");
    scanf("%f",&r);

    si = (p*t*r)/100;
    printf("S.I = %f\n",si);
    printf("Total amount with interset = %f",(si+p));
    
    return 0;
}