#include<stdio.h>

void main(){
    int a,b=0,c=10000;
    printf("Enter any 5 digit number\n");
    scanf("%d", &a);
    while (a!=0)
    {
        b = b +(a%10)*c;
        a=a/10;
        c=c/10;
    }
    printf("Reversed number is %d", b);
    
}