#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    double result;
    printf("Enter a Value of x :");
    scanf("%d", &x);
    result = sqrt(pow(x, 3) + pow(x, 2) - 12 * x - 12); //√(𝑥^3+𝑥^2−12𝑥−12)
    printf("%lf", result);
    return 0;
}
