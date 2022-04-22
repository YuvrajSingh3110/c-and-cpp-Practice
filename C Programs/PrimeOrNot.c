#include<stdio.h>

void main(){
    int a;
    int temp = 0;
    printf("Enter the number \n");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        if (a % i == 0)
        {
            temp = 1;
            break;
        }
        
    }

    if (temp == 1)
    printf("not prime");

    else
    printf("prime");
    
}