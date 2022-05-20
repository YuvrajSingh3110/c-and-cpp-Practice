#include<stdio.h>

void main(){
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    int sum=0;
    if (n>100 && n<200 && n%7==0)
    {
        while (n!=0)
        {
            sum+=n%10;
        n=n/10;
        }
        printf("Sum of the digits is: %d",sum);
    }
    else 
    {
        printf("Conditions did not matched");
    }
    
}