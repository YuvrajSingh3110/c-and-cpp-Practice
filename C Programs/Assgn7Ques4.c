#include<stdio.h>

int main(){
    int i=1, cnt=0;
    int sum=0;
    while(i<=100){
        if(i%6 == 0 && i%4!=0){
            cnt++;
            sum+= i;
            printf("digit divisible %d \n", i);
        }
        i++;
    }
    printf("sum is %d \n", sum);
    printf("count is %d", cnt);
    return 0;
}