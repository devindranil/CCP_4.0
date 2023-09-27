//C program to check whether a number is armstrong number or not
/**
 *Example
Input
Input number: 371
Output
371 is armstrong number
 * 
 */

#include <stdio.h>
int main()
{
    int n,r;//num & r are variables to store number and remainder
    int arm=0;//arm is variable to store sum of cubes of digits
    printf("Enter a number: ");
    scanf("%d", &n);
    int c=n;//c is variable to store number
    //loop to find sum of cubes of digits
    while(n > 0)
    {
        r = n%10;//find remainder
        arm = arm + (r*r*r);//find sum of cubes of digits
        n =n/10;//reduce number by 1 digit
    }
    
    //check if number is armstrong or not
    if(c == arm){
        printf("armstrong number");
    }
    else{
        printf("not armstrong number");
    }
    
    return 0;
}