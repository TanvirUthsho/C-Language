#include <stdio.h>

double getArea(int a, int b, int h);
int main()
{
    int a, b, h;
    double result;
    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Enter b:\n");
    scanf("%d", &b);
    printf("Enter h:\n");
    scanf("%d", &h);
    result = getArea(a, b, h);
    printf("Area of the trapezoid: %lf", result);
    return 0;
}

double getArea(int a, int b, int h)
{
    double result = 1 / 2 * (a + b) * h;
    return result;
}
