#include<stdio.h>
#include<math.h>

void main(){

    printf("Number  ");
    double temp = 0.0;
    for(int i=0; i<10; i++){
        printf(" %.1f\t", temp);
        temp += 0.1;
    }
    printf("\n ");
    double number = 0.0;

    for(int i=0; i<10; i++){
        printf(" %.1f\t", number);

      for(double j=0.0; j< 0.9; j+= 0.1){
        printf(" %.2f\t", sqrt(number + j));
    }
    number += 1.0;
    printf("\n");
    }
}