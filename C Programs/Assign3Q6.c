#include<stdio.h>

void main(){
    int a;
    int sum=0;
    printf("Enter any 4 digit integer\n");
    scanf("%d", &a);
    while(a!=0){
        sum = sum + a%10;
        a=a/10;
    }
    printf("Sum of digits is %d", sum);
}