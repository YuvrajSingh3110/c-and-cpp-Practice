#include<stdio.h>

void main(){
    float a,b;
    int c;
    printf("Enter any 2 numbers a and b\n");
    scanf("%f %f", &a,&b);
    c=a+b;
    printf("a,b,c respectively are %g %g %d", a,b,c);
}