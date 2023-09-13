#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    int root_part, denom;
    int root1, root2;

    printf("Enter the three coefficient value: ");
    scanf("%d%d%d", &a, &b, &c);

    // root part
    root_part = sqrt((b * b) - (4 * a * c));
    denom = 2 * a;

    // condition

    if (a == 0)
    {
        printf("This is not a quadratic equation\n");
    }
    else
    {
        // root part is negative or positive
        if (root_part > 0)
        {
            // formula
            root1 = (-b + root_part) / denom;
            root2 = (-b - root_part) / denom;
            printf("The root are real number\n");
            printf("The roots are %d and %d\n", root1, root2);
        }
        else if (root_part == 0)
        {
            // formula
            root1 = (-b + root_part) / denom;
            root2 = (-b - root_part) / denom;
            printf("The root are real number and root part is equal to zero\n");
            printf("The roots are %d and %d\n", root1, root2);
        }
        else
        {
            printf("The root are imaginary number\n");
        }
    }
    return 0;
}