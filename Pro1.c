#include <stdio.h>

int main ()
{
    double num1, num2, x;
    printf("input number : ");
    scanf("%lf %lf", &num1, &num2);
    
    // x = num1 + num2;
    printf("%lf + %lf = %lf\n", num1, num2, num1 + num2);

    // x = num1 - num2;
    printf("%lf - %lf = %lf\n", num1, num2, num1 - num2);

    // x = num1 * num2;
    printf("%lf x %lf = %lf\n", num1, num2, num1 * num2);

    // x = num1 / num2;
    printf("%lf / %lf = %lf\n", num1, num2, num1 / num2);
    return 0;
}