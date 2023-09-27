// C program to print all prime numbers between 1 to n
/**
 * Example
Input
Input lower limit: 1
Input upper limit: 20
Output
Prime numbers between 1-20: 2, 3, 5, 7, 13, 17, 19
 *
 */

#include <stdio.h>
int main()
{
    int i,j,n; // i=6
    printf("Enter the value of n: "); //5
    scanf("%d", &n);// 1 2 3 4 5
    for(i=2;i<=n;i++)
    {
        int count=0; // c=0
        for(j=1;j<=i;j++) // j=1
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)//2==2
        {
            printf("%d ",i);//2 3 5
        }
    }
    return 0;
}