#include <stdio.h>
int main ( )
{
    double num;

    printf ("enter the num: ");
    scanf ("%lf",&num);

    if (num > 0)
    {
        printf("%lf is a Positive Real\n", num);
    }


    if (num < 0)
    {
        printf("%lf is a Negative Real\n", num)  ;
    }

    double d=num;
    double x=(int)num;
    if (d == x && num > 0)
    {
        printf("%lf is a Natural num\n", num);
    }

    if (d != x)
    {
        printf("%lf is a rational num\n", num);
    }
    return 0;
}