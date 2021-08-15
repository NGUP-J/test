// c = 2a+b
// c = a5+a4+2a3+3a2+4a+3
// c = 2+3a
#include <stdio.h>
#include <math.h>

int main ()
{
    double a, b, c;
    printf("input number : ");
    scanf("%lf %lf", &a, &b);
    
    printf("&lf = 2(%lf) + &lf\n", 2*a + b, a, b);
    printf("&lf = 2(%lf) + &lf\n", 2*a + b, a, b);
    printf("&lf = 2(%lf) + &lf", 2*a + b, a, b);
    return 0;
}
