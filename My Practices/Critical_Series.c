#include <stdio.h>

int main()
{
    float x, sum, term;
    int i, n;
    printf("Input the value of x :");
    scanf("%f", &x);
    printf("Input number of terms : ");
    scanf("%d", &n);
    sum = 1;
    term = 1;
    for (i = 1; i < n; i++)
    {
        term = term * x / (float)i;
        sum = sum + term;
    }
    printf("\nThe sum  is : %f\n", sum);
    return 0;
}