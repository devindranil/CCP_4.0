//C program to check whether a number is prime number or not
/**
 * Example
Input
Input any number: 17
Output
17 is prime number
*/

#include <stdio.h>
int main()
{
    int n;//n is variable to store number
    int i;//i is variable to use in loop
    int count=0;//count is variable to count number of factors
    printf("Enter a number: ");
    scanf("%d", &n);
    //loop to find factors of number
    for(i=1;i<=n;i++)//
    {
        //check if i is factor of n
        if(n%i==0)
        {
            count++;//increase count by 1
        }
    }
    //check if number is prime or not
    if(count==2)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is not prime number", n);
    }
    
    return 0;
}