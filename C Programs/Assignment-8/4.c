#include <stdio.h>
int main()
{

int m, n;
char ch;
printf("Enter operation(+,-,*,T for transpose): ");
scanf("%c", &ch);

printf("Enter number of rows and columns: ");
scanf("%d %d",&m,&n);
int i, j;
int mat1[m][n], mat2[m][n], mat3[m][n];

printf("Enter amatrix 1:\n");
for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
scanf("%d",&mat1[i][j]);
}

printf("Enter matrix 2:\n");
for(i = 0; i < n; i++)
{
for(j = 0; j < n; j++)
scanf("%d",&mat2[i][j]);
}

switch (ch)
{
    case '+':
    for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
{
mat3[i][j] = mat1[i][j] + mat2[i][j];
}
}

printf("After sum new matrix is:\n ");
for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
printf("%d ", mat3[i][j]);
printf("\n");
}
    break;
    case '-':
    for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
{
mat3[i][j] = mat1[i][j] - mat2[i][j];
}
}

printf("After diff new matrix is:\n ");
for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
printf("%d ", mat3[i][j]);
printf("\n");
}
    break;
    case '*':
    for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
{
mat3[i][j] = mat1[i][j] * mat2[i][j];
}
}

printf("After multiply new matrix is:\n ");
for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
printf("%d ", mat3[i][j]);
printf("\n");
}
    break;
    case 'T': printf("After transpose:\n");
    for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
{
printf("%d ", mat1[j][i]);
}
printf("\n");
}
printf("\n");

for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
{
printf("%d ", mat2[j][i]);
}
printf("\n");
}
    break;
default: printf("Incorrect operation !!");
    break;
}

return 0;
}