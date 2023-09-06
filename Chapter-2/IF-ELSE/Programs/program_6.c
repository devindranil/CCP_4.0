#include<stdio.h>
int main(){

    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    //if else
    /*if((n%5==0) && (n%11==0)){
        printf("%d is divisible 5 and 11",n);
    }else{
        printf("%d is not divisible by 5 and 11",n);
    }*/
    //nested if
    if(n%5==0){
        if(n%11==0){
            printf("%d is divisible 5 and 11",n);
        }else{
            printf("%d is not divisible by 5 and 11",n);
        }
    }else{
        printf("%d is not divisible by 5 and 11",n);
    }
    return 0;
}