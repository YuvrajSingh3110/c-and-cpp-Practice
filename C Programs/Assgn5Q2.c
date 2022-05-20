#include<stdio.h>

void main(){
    int m,n;
    printf("Enter any 2 numbers\n");
    scanf("%d %d", &m,&n);

   (n%m==0) ? printf("m is a multiple of n") : printf("m is not a multiple of n");
    
}