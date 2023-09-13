#include<stdio.h>
int main()
{
    int bs, gross, hra, da;

    printf("Enter your base salary: ");
    scanf("%d",&bs);

    if(bs<=10000)
    {
        hra=bs*0.2;
        da= bs*0.8;
    }
    else if(bs<=20000)
    {
        hra=bs*0.25;
        da= bs*0.9;
    }
    else
    {
        hra=bs*0.3;
        da= bs*0.95;
    }

    gross = bs + hra + da;
    printf("The hra of an employee is: %d\n",hra);
    printf("The da of an employee is: %d\n",da);
    printf("The gross salary of an employee is: %d",gross);
    return 0;
}