#include<stdio.h>

void main(){
    int a,b;
    printf("Enter the 2 numbers \n");
    scanf("%d %d", &a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping a =%d and b =%d ",a,b);
    
}