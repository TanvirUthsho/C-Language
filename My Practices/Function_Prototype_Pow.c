#include <stdio.h>
#include <math.h>
int power(int a, int b);

int main()
{
    int a, x, result;
    printf("Enter value of a & x:\n");
    scanf("%d%d", &a, &x);
    result = power(a, x);
    printf("result is %d", result);
    return 0;
}

int power(int a, int b)
{
    int c = 1;
    for (int i = 1; i <= b; i++)
        c = c * a;
    return c;
}