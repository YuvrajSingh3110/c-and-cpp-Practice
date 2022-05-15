#include<stdio.h>
#include<math.h>

void main(){
 int a=10;
     printf(" _____________________________________________\n");
     printf("|    Number   |   Square-root   |   square    |\n");
     printf("|_____________|_________________|_____________|\n");
     printf("|      %d      |      %.2f       |     %.0f       |\n" , a*0  ,sqrt(a*0)  , pow(a*0 ,2));
     printf("|      %d     |      %.2f       |     %.0f     |\n"    , a*1  ,sqrt(a*1)  , pow(a*1 ,2));
     printf("|      %d     |      %.2f       |     %.0f     |\n"    , a*2  ,sqrt(a*2)  , pow(a*2 ,2));
     printf("|      %d     |      %.2f       |     %.0f     |\n"    , a*3  ,sqrt(a*3)  , pow(a*3 ,2));
     printf("|      %d     |      %.2f       |     %.0f    |\n"     , a*4  ,sqrt(a*4)  , pow(a*4 ,2));
     printf("|      %d     |      %.2f       |     %.0f    |\n"     , a*5  ,sqrt(a*5)  , pow(a*5 ,2));
     printf("|      %d     |      %.2f       |     %.0f    |\n"     , a*6  ,sqrt(a*6)  , pow(a*6 ,2));
     printf("|      %d     |      %.2f       |     %.0f    |\n"     , a*7  ,sqrt(a*7)  , pow(a*7 ,2));
     printf("|      %d     |      %.2f       |     %.0f    |\n"     , a*8  ,sqrt(a*8)  , pow(a*8 ,2));
     printf("|      %d     |      %.2f       |     %.0f    |\n"     , a*9  ,sqrt(a*9)  , pow(a*9 ,2));
     printf("|      %d    |      %.2f      |     %.0f   |\n"        , a*10 ,sqrt(a*10) , pow(a*10 ,2));
     printf("|_____________|_________________|_____________|\n");
}