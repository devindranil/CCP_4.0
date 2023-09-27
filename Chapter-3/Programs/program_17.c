#include<stdio.h>
int main()
{
    int n,r=0; //n=123 n=0
    printf("Enter a number to reverse\n");
    scanf("%d",&n);
    while(n!=0)
    {
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    printf("The reverse number is: %d",r);
    return 0;
}