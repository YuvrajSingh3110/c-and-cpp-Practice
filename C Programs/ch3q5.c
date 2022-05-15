#include<stdio.h>

void main(){
    int n;
    printf("Enter the number \n");
    scanf("%d", &n);
    printf("%d\n", n);
    while (n!=0)
    {
        n=n/10;
        if (n==0)
        {
            break;
        }
        
        printf("%d \n", n);
    }
    
}