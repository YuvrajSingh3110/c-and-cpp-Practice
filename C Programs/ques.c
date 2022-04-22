#include <stdio.h>
#include <math.h>

int main(){
    float a,b,s;
    char c;
    printf("enter the operator\n");
    scanf("%c",&c);
    printf("enter two numbers:\n");
    scanf("%f %f",&a,&b);
    
   
    
      
       switch('c'){
         case '+':
        printf("%g+%g=%g\n",a,b,a+b);
        break;

        case '-':
        printf("%g-%g=%g\n",a,b,a-b);
        break;

        case '*':
        printf("%g*%g=%g\n",a,b,a*b);
        break;

        case '%':
        s=remainder(a,b);
        printf("%g % %g=%g\n",a,b,s);
        break;

        case '/':
        s=a/b;
        printf("%g/%g=%g\n",a,b,s);
        break;

        default:
        printf("invalid operator");
        break;
    }
    
    return 0;
}

// Program to create a simple calculator


// #include <stdio.h>

// int main() {
//     char c;
//     double n1, n2;

//     printf("Enter an operator (+, -, *, /): ");
//     scanf("%c", &c);
//     printf("Enter two operands: ");
//     scanf("%lf %lf",&n1, &n2);

//     switch(c)
//     {
//         case '+':
//             printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
//             break;

//         case '-':
//             printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
//             break;

//         case '*':
//             printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
//             break;

//         case '/':
//             printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
//             break;

//         default:
//             printf("operator is not correct");
//     }

//     return 0;
// }
