#include<stdio.h>

struct student{
    int id;
    char name[30];
    float sm[5];
    float cgpa;
    char grade[30];
};

int main(){
    int n;
    printf("Enter no of students: ");
    scanf("%d",&n);
    int count[8]={0,0,0,0,0,0,0,0};
    struct student s[n];
    float tot[n];

    for(int i=0;i<n;i++){   
        float total=0;

        printf("Enter roll no.\n");
        scanf("%d",&s[i].id);
        printf("enter name\n");
        scanf("%s",&s[i].name);

        printf("Enter marks in 5 subject: ");
        for(int j=0;j<5;j++){
            scanf("%f",&s[i].sm[j]);
            total=total+s[i].sm[j];
        }
        tot[i]=total;
        float per=(total/500)*100;
        s[i].cgpa=(per)/9.5;
        if(per>90.00 && per<=100.00){
            s[i].grade[i]='A';
            count[0]++;
        }
        if(per>80.00 && per<=90.00){
            s[i].grade[i]='B';
            count[1]++;
        }
        if(per>70.00 && per<=80.00){
            s[i].grade[i]='C';
            count[2]++;
        }
        if(per>60.00 && per<=70.00){
            s[i].grade[i]='D';
            count[3]++;
        }
        if(per>50.00 && per<=60.00){
            s[i].grade[i]='E';
            count[4]++;
        }
        if(per>40.00 && per<=50.00){
            s[i].grade[i]='F';
            count[5]++;
        }
        if(per>30.00 && per<=40.00){
            s[i].grade[i]='G';
            count[6]++;
        }
        if(per>0.00 && per<=30.00){
            s[i].grade[i]='-';
            count[7]++;
        }
 
    }
    printf("--------------------------------------------------------------------------------\n");
    printf("| ROLL NO. |     NAME     |    CGPA    |         Sm        | TOTAL(500) | GRADE |\n");
    printf("--------------------------------------------------------------------------------\n");
    for(int i=0;i<n;i++){
        printf(" %-9d",s[i].id);
        printf("  %-14s",s[i].name);
        printf(" %-13.3f",s[i].cgpa);
        for(int j=0;j<5;j++){
            printf("%g ",s[i].sm[j]);
        } 
        printf(" %12g",tot[i]);
        printf(" %7c",s[i].grade[i]);
        printf("\n");
    }
    printf("--------------------------------------------------------------------------------\n");
    printf("\n");
    for(int i=0;i<7;i++){
        printf("%c | %d\n",65+i,count[i]);
    }
}