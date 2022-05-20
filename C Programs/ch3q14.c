#include<stdio.h>

void main(){
    int m,n;
    printf("Enter any 2 numbers\n");
    scanf("%d %d", &m,&n);

    if (n%m ==0)
    {
        printf("m is multiple of n");
    }
    else
        printf("m is not a multiple of n");

    
}