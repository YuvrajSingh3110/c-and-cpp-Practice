#include <stdio.h>
int main(){
    int rows, columns, columns2;
    printf("Enter no of rows of array1: ");
    scanf("%d",&rows);
    printf("Enter no of columns of array1: ");
    scanf("%d",&columns);
    int array1[rows][columns];
    printf("The no of rows of array2: %d",columns);
    printf("\nEnter no of columns of array2: ");
    scanf("%d",&columns2);
    int array2[columns][columns2];
    printf("Enter the element of array1: ");
    for(int i=0;i<rows;i++){
        printf("\nEnter the elements of row %d: ",i+1);
        for(int j=0;j<columns;j++){
            scanf("%d",&array1[i][j]);
        }
    }
    printf("Enter the elements of array2: ");
    for(int i=0;i<columns;i++){
        printf("\nEnter the elements of row %d: ",i+1);
        for(int j=0;j<columns2;j++){
            scanf("%d",&array2[i][j]);
        }
    }
    int array3[rows][columns2];
 

    int sum;
    for(int i=0; i<rows; i++){
      for(int j=0; j<columns; j++){
        sum=0;
        for(int k=0; k<columns2; k++){
                sum+=(*(*(array1+i)+k)) * (*(*(array2+k)+j));               
            }
        *(*(array3 + i)+j) = sum;
             printf("\n");
      }
      }
   
    printf("The matrix after mulitiplication is: ");
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns2;j++){
            printf("%d ",(*(*(array3+i)+j)));
        }
        printf("\n");
    }
    return 0;
}