#include <stdio.h>
int main()
{
    // int num1 = 10;//initialization
    // int num2=20;//declaration
    // user input
    /*float num3;
    printf("Enter any integer value: ");
    scanf("%f",&num3);
    printf("\nThe value of num3 is: %.1f",num3);*/

    // operator in c
    // math = 5+10 = 15,where 5 and 10 is operand
    //  num1+num2 = num1,num2 = operand, +=opeerator

    // Arithmatic operator
    // add,sub,mul,divi,remainder
    /*int num1;
    int num2;
    int result;
    printf("Enter the num1: ");
    scanf("%d", &num1);
    printf("Enter the num2: ");
    scanf("%d", &num2);
    //operation
    result = num1 % num2;//modulus operator = remainder 
    printf("The result is: %d\n",result);*/

    //Relational Operator
    //equal to, not equal to, greater than, less than, greater than or equal, less than or equal
    /*int a=10;
    int b=20;
    int c= a<=b; //bolean = true=1 or false=0
    printf("%d",c);*/

    //assignment operator
    /*int a=10;
    int c=20;
    c %= a;//+= -> + c+=a = c = c%a;
    printf("%d", c);*/

    //Logical operator
    /*
        (1) - Logical AND operator
        (2) - Logical OR
        (3) - Logical Not

        Logical AND
        Syntax - operand1 AND operand2
        case 1 - T AND T = T
        case 2 - T AND F = F
        case 3 - F AND T = F
        case 4 - F AND F = F

        Logical OR
        Syntax - operand1 OR operand2
        case 1 - T AND T = T
        case 2 - T AND F = T
        case 3 - F AND T = T
        case 4 - F AND F = F

        Logical NOT
        Syntax - !(operand)
        True = False
        False = True
    */

   //LOGICAL AND
   /*int a=20;
   int b=10;
   int result = (a>b) && (a==b);
   printf("%d",result);*/
   //LOGICAL OR
   /*int a=20;
   int b=10;
   int result = (a>b) || (a==b);*/
   //LOGICAL NOT
   /*int a=5;
   int b=10;
   int result = !(a>b);
   printf("%d",result);*/

   //Unary Operator
   /*
    Types - 2
    Unary Increment = ++
    Unary Decrement = --

    int a=10;
    a++;

    a++ = a+1 = 10+1 = 11

    int b=10;
    b--;
    b-- = b-1 = 10-1=9
   */

    /*int a=10;
    int b=20;
    int c,z;
    c = a;
    printf("%d", c);*/
 
    return 0;
}