#include <stdio.h>
int main()
{
    //(1) - IF STATEMENT
    /*int num;
    printf("Enter any Number: ");
    scanf("%d", &num);*/

    // condition
    /*
        if(condition)
        {
            //body of if
            //if condition is true then only if block executre
            //condition false program skip the if block
        }

        syntax - else
        if(condition){
            //body of if
        }else{
            //body of else
        }

        syntax - else if ladder
        if(condition 1){
            //body of if
        }else if(condition 2){
            //else if body
        }else if(condition 3){
            //body of else if
        }else{
            //when all the above condition is false
        }

        syntax - nested if statement
        if()
        {
            if(){

            }else{

            }
        }
        else{

        }
    */
    // if block
    /*if (num < 0)
    {
        printf("This is a negative number");
    }
    else if(num==0)
    {
        printf("Number is a equal number");
    }
    else
    {
        printf("This is a positive number");
    }*/

    /*
        input - 10 20 30
        output - 30

        input 85 97 20
        output 97
    */

    int n1, n2, n3;
    printf("Enter the three integer numbers: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    if(n1>n2){
        if(n1>n3){
            printf("%d is the largest number",n1);
        }else{
            printf("%d is the largest number",n3);
        }
    }else{
        if(n2>n3){
            printf("%d is the largest number",n2);
        }else{
            printf("%d is the largest number",n3);
        }
    }
    return 0;
}