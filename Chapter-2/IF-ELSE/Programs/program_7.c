#include<stdio.h>
int main(){

    char ch;
    printf("Enter any character: ");      
    scanf("%c",&ch);
    //H.Q - NESTED IF      
    /*if(ch>='a' && ch<='z'){
        printf("%c is a charcter",ch);               
        //capital A-Z
        if(ch>='A' && ch<='Z'){                  
            printf("%c is a character",ch);
        }
        else if(ch>=0 && ch<=9){
            printf("%c is a digit", ch);
        }
    }*/

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("%c is an alphabet",ch);
    }
    else if(ch>=0 && ch<=9)
    {
        printf("%c is an digit",ch);
    }
    else
    {
        printf("%c is an special character");
    }



    return 0;
}