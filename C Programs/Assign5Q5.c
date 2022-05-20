#include<stdio.h>

void main(){
    int m,n;
    printf("Enter any 2 three digit numbers\n");
    scanf("%d%d", &m,&n);
    printf("On multiplication ->\n");
    printf(" %d\n*%d\n_____\n", m,n);
    printf("  %d\n",m*(n%10));
    printf(" %dX\n",m*(n%10));
    printf("%dXX\n_____\n%d", m*(n/10), m * n);



int n1,n2;
printf("\nEnter the four digit number: ");
scanf("%d",&n1);
printf("Enter the two digit number: ");
scanf("%d",&n2);
int a=n1/n2, c=a/100, b=c*n2, d=n1/100;
int e=(a%100)/10, g=((d-b)*10)+(n1%100)/10 ,h=(g)-(n2*e);
int f=(d-b)/10;
printf("   ____\n");
printf("%d) %d (%d \n",n2,n1,a);
printf("    %d\n",b);
printf("    ____\n");
printf("     %d\n",g);
printf("    -%d\n",n2*e);
printf("    ____\n");
printf("      %d%d\n",h,n1%10);
printf("     -%d\n",n2*(a%10));
printf("     ____\n");
printf("       %d\n",n1%n2);
printf("     ____");
}