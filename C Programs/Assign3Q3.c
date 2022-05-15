#include<stdio.h>

void main(){
    int f;
    float c;
    printf("Enter temperature in fahrenheit\n");
    scanf("%d", &f);
    c = (f-32)/1.8;
    printf("Temperature in celsius is %0.2f", c);

}