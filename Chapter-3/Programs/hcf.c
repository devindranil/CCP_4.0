/**Write a Program to Find GCD or HCF of two numbers
entered by user*/
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    printf("GCD of the two numbers is %d\n", num1);
    return 0;
}
