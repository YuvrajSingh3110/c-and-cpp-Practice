#include<stdio.h>
#include<math.h>

void main(){
    float dr, sc, hc, eoq, tbo;
    printf("Enter demand rate: ");
    scanf("%f", &dr);
    printf("Enter setup costs: ");
    scanf("%f", &sc);
    printf("Enter holding cost: ");
    scanf("%f", &hc);

    eoq = sqrt((2*dr*sc)/hc);

    tbo = sqrt((2*sc)/(dr*hc));

    printf("Economic Order Quantity is: %0.2f\n", eoq);
    printf("Optimal Time between Orders is: %0.2f", tbo);
}