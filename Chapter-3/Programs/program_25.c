//C program to find sum of prime numbers between 1 to n
/**
 * Example
Input
Input upper limit: 10
Output
Sum of prime numbers between 1-10: 17
 * 
 */

#include <stdio.h>
int main()
{
    int i, j, n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (i = 2; i <= n; i++)
    {
        int c = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            printf("Prime number: %d\n", i);
            sum += i;
        }
    }
    
    printf("Sum of prime numbers between 1 to %d: %d", n, sum);
    
    return 0;
}
