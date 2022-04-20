#include <stdio.h>
#include <math.h>
int main()
{
    char operator;
    float first, second;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%f %f", &first, &second);

    switch (operator)
    {
    case '+':
        printf("%.1f + %.1f = %.1f", first, second, first + second);
        break;
    case '-':
        printf("%.1f - %.1f = %.1f", first, second, first - second);
        break;
    case '*':
        printf("%.1f * %.1f = %.1f", first, second, first * second);
        break;
    case '/':
        printf("%.1f / %.1f = %.1f", first, second, first / second);
        break;
    case '%':
        printf("%.1f  percentage  %.1f = %.1f ", first, second, remainder(first, second));
        break;

    // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}