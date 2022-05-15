#include <stdio.h>

int reverse(int *arra, int n)
{
    int temp = 0;
    for (int i = 0; i < n/2 ;i++) {
        temp=arra[i];
        arra[i]=arra[n-i-1];
        arra[n-i-1]=temp;       
        }
        printf("Final array of marks\n");
        for (int i = 0; i < n; i++){
            printf("%d ", arra[i]);
        }
        return 0;
    }


int main(){
    int n;
    int arra[10];
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter %d numbers : ",n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arra[i]);
    }
    reverse(arra, n);
    return 0;
}

