#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter  a, b and c respectively: ");
    scanf("%d %d %d", &a, &b, &c);

    d = c;
    c = b;
    b = a;
    a = d;
    printf("a = %d \nb = %d \nc = %d\n", a, b, c);
    return 0;
}
