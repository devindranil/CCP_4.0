#include <stdio.h>
int main()
{
    int a = 10;
    switch (a)
    {
    case 20:
        printf("Hii\n");
        break;
    case 11:
        printf("Hello\n");
        break;
    //best practice
    default:
        printf("Bye\n");
    }
    return 0;
}