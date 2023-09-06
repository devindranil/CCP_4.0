#include <stdio.h>
int main()
{
    int annual_income, monthly_income, ta, da, pf, tax;
    printf("Enter your annual Salary: ");
    scanf("%d", &annual_income);

    monthly_income = annual_income/12;
    tax=(annual_income*15)/100;
    da=monthly_income*0.1;
    ta=monthly_income*0.1;
    pf=monthly_income*0.05;

    printf("Annual Income is: %d\n",annual_income);
    printf("Monthly Income is: %d\n",monthly_income);
    printf("Income Tax: %d\n",tax);
    printf("TA: %d\n",ta);
    printf("DA: %d\n",da);
    printf("PF: %d\n",pf);
    return 0;
}