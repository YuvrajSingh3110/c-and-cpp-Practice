#include<stdio.h>

void main(){
    int a,b,c;
    printf("Enter the sides of triangle\n");
    scanf("%d %d %d", &a,&b,&c);
    if (a==b && b==c && a==c)
    {
        printf("The triangle is equilateral");
    }
    
    if( (a*a) + (b*b) == (c*c) || (c*c) + (b*b) == (a*a) || (a*a) + (c*c) == (b*b)){
        printf("It is a right triangle");
    } 
    else if (a!=b && b!=c && a!=c)
    {
        printf("The triangle is isosceles");
    }
    
    
}