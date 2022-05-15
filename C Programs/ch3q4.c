#include<stdio.h>

void main(){
    float l,b;
    printf("Enter the length and width of the rectangle\n");
    scanf("%f %f", &l,&b);
    printf("The area and perimeter of the rectangle is: %0.2f and %0.2f", l*b, 2*(l+b));
}