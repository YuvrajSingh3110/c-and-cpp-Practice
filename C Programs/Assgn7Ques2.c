#include<stdio.h>

int main()
{
    float a;
    char ch;
    printf("Enter actual amount without discount: ");
    scanf("%f",&a);
    printf("Enter item name of purchasing('m' for mill and 'h'for Handloom): ");
    scanf("%s",&ch);
    if(a>0 && a<=100)
    {
        switch(ch)
        {
        case 'm':
        case 'M':
            {
                printf("Amount to be paid = %.2f",a);
                break;
            }
        case 'h':
        case 'H':
            {
                printf("Amount to be paid = %.2f",(a-=(a*0.05)));
                break;
            }
        }
    }
    else if(a>100 && a<=200)
    {
        switch(ch)
        {
        case 'm':
        case 'M':
            {
                printf("Amount to be paid = %.2f",(a-=(a*0.05)));
                break;
            }
        case 'h':
        case 'H':
            {
                printf("Amount to be paid = %.2f",(a-=(a*0.075)));
                break;
            }
        }
    }
    else if(a>200 && a<=300)
    {
        switch(ch)
        {
        case 'm':
        case 'M':
            {
                printf("Amount to be paid = %.2f",(a-=(a*0.075)));
                break;
            }
        case 'h':
        case 'H':
            {
                printf("Amount to be paid = %.2f",(a-=(a*0.1)));
                break;
            }
        }
    }
    else if(a>300)
    {
        switch(ch)
        {
        case 'm':
        case 'M':
            {
                printf("Amount = %.2f",(a-=(a*0.1)));
                break;
            }
        case 'h':
        case 'H':
            {
                printf("Amount = %.2f",(a-=(a*0.15)));
                break;
            }
        }
    }
    return 0;
}