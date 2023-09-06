#include <stdio.h>
int main()
{
    /*
        leap year
        (1)year % 400 == 0 - leap year
        (2) year%4==0 && year%100!=0
    */

    int year;
    printf("Enter any year: ");
    scanf("%d", &year);
    //H.W-NESTED
    if (year % 400 == 0)
    {
        printf("%d Year is a leap year", year);
    }   
    else if ((year % 4 == 0) && (year % 100 != 0))
    {
        printf("%d Year is a leap year", year);
    }
    else
    {
        printf("%d Year is not a leap year", year);
    }
    return 0;
}