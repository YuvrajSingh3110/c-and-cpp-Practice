#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    for (int i = 10; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            printf("1");
        else
            printf("0");
    }
    return 0;
}