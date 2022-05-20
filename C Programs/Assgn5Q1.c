#include<stdio.h>

void main(){
   float a;
   printf("Enter a floating point number: ");
   scanf("%f", &a);
   int b = (int)a;
   printf("%d", b%100);
}