#include<stdio.h>
int main()
{
    int a,b,c,d,cd,res;
    printf("Enter 4 numbers: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    cd=c-d;//important

    if(cd!=0)
    {
        res=(a+b)/cd;
        printf("The ratio of (a+b):(c-d) = %d",res);
    }
    else
    {
        printf("The ratio is not possible to count");
    }
    return 0;
}