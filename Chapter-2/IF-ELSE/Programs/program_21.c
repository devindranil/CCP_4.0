#include<stdio.h>
int main()
{
    int a;//a is unit rs
    float b;//b is a bill amount
    float sc;//sub charge
    float total_bill;//total bill amount
    float tax;//tax amount (hw)

    printf("Enter the units in Rs: ");
    scanf("%d",&a);

    if(a<=50){
        b = a*0.50;
    }else if(a<=150){
        b = 50*0.50 + (a-50)*0.75 ;
    }else if(a<=250){
        b = (50*0.50) + (100*0.75) + (a-150)*1.20;
    }
    else{
        b = 50*0.50 + 100*0.75 + 100*1.20 + (a-250)*1.50;
    }

    sc = b*0.2; //sub charge added in the bill amount (20%)
    total_bill = b+sc;

    printf("The total electricity bill is: %.2f\n",total_bill);
    printf("Sub charge of electricity bill is: %.2f",sc);

    //H.W TAX CALCULATE
    /*
        total bill <= 400, no tax
        total bill <=600, tax 20%
        total bill above 600, tax 25%
    */

   //----your code---------- 
   


    return 0;
}