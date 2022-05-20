#include<stdio.h>

int main(){
    int n,e;
    printf("enter the no of students");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("enter the marks of %dth student",i);
        scanf("%d",&e);
        if(e>90 && e<=100){
            printf("grades of %dth student is A\n",i);
        }
        if(e>80 && e<=90){
            printf("grades of %dth student is B\n",i);
        }
        if(e>70 && e<=80){
            printf("grades of %dth student is C\n",i);
        }
        if(e>60 && e<=70){
            printf("grades of %dth student is D\n",i);
        }
        else if(e<=60){
            printf("try to study buddy\n");
        }
    }
}