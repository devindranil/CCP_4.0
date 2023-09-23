//wap in switch case to find the quardatic equation

#include <stdio.h>
#include <math.h>
int main()
{
    //using switch case
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
        switch (root_part > 0) //f=0
        {
        case 1:
            // formula
            root1 = (-b + root_part) / denom;
            root2 = (-b - root_part) / denom;
            printf("The root are real number\n");
            printf("The roots are %d and %d\n", root1, root2);
            break;
        case 0:
            switch (root_part == 0)
            {
            case 1:
                // formula
                root1 = (-b + root_part) / denom;
                root2 = (-b - root_part) / denom;
                printf("The root are real number and root part is equal to zero\n");
                printf("The roots are %d and %d\n", root1, root2);
                break;
            case 0:
                printf("The root are imaginary number\n");
                break;
            }
        }
    }
    return 0;
}