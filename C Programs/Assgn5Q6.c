#include<stdio.h>
#include<math.h>

void main(){
    int a,b,c;
    printf("Enter the sides of triangle\n");
    scanf("%d%d%d", &a,&b,&c);
    float s = (a+b+c)/2;
    float ar = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle is: %g", ar);
}