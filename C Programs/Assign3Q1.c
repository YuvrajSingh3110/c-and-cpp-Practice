#include<stdio.h>

void main(){
    float r,s;
    printf("Enter the amount of rice in kg \n");
    scanf("%f", &r);
    printf("Enter the amount of sugar in kg \n");
    scanf("%f", &s);
    printf("***LIST OF ITEMS***\n");
    printf("Items \t Price\n");
    printf("Rice \t %0.2f \n", r*16.75);
    printf("Sugar \t %0.2f", s*15.00);

}