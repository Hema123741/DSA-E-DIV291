// c program for computing total bill for beverages
/*
Name:Apoorva
Roll no.:1910
Division:S
Date:16/01/2023
*/
#include<stdio.h>
//function prototype
float total_bill_amount(char type,int quality);
int main()
{
    char type;
    int quantity;
    float total_bill;
    printf("Enter type of beverages(in upper case) and quantity\n");
    printf("B-Badam milk\n C-chocolate milk\n S-strawberry milk\n M-Mango\n");
    scanf("%c%d",&type,&quantity);
    if(type=='B'||type=='C'||type=='S'||type=='M')
    {
        //function call
        total_bill =total_bill_amount(type,quantity);
        printf("Total bill %f\n",total_bill);
    }
    else
        printf("Invalid input for type of beverages\n");
        return 0;
}
// function definition
float total_bill_amount(char type,int quantity)
{

    float bill;
    switch(type)
    {
        case 'B':bill=25*quantity+1;
        break;
        case'C':bill=30*quantity+1;
        break;
        case'S':bill=50*quantity+1;
        break;
        case'M':bill=45*quantity+1;
        break;
    }
    return (bill);
}








