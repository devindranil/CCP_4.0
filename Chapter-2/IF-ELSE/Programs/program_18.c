#include <stdio.h>
int main()
{

    int math, phy, chem, totalMarks, mathPhy;

    printf("Enter the marks of math: ");
    scanf("%d", &math);
    printf("Enter the marks of physics: ");
    scanf("%d", &phy);
    printf("Enter the marks of chemistry: ");
    scanf("%d", &chem);

    totalMarks = math + phy + chem;
    mathPhy = math + phy;

    printf("Total Marks in three subject is: %d\n", totalMarks);
    printf("Total marks in math and physics is: %d\n",mathPhy);

    if (math>=65 && phy>=55 && chem>=50)
    {
        if(totalMarks>=180 || mathPhy>=140)
        {
            printf("'Congratulation', you are 'eligible' for admission");
        }
        else
        {
            printf("Sorry, you are not eligible for admission");
        }
    }
    else
    {
        printf("Sorry, you are not eligible for admission");
    }

        return 0;
}