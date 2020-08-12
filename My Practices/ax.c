#include <stdio.h>
#include <math.h>
int main()
{
    double a, x;
    double result;
    printf(" Enter the value of a :\n", a);
    scanf("%lf", &a);
    printf(" Enter the value of x :\n", x);
    scanf("%lf", &x);
    result = pow(a, x);
    printf("%lf", result);
    return 0;
}
