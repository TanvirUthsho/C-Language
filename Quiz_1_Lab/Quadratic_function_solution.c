#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    double D, root, root1, root2, ans;
    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    D = pow(b, 2) - 4 * a * c;
    if (D > 0)
    {
        
        root1 = (-b + sqrt(D) / (2 * a));
        root2 = (-b - sqrt(D) / (2 * a));
        root = root1;
        
    }
    if (D = 0)
    {
    }
    else
    {
    }

    ans = (a * pow(x, 2)) + b * x + c;
    printf("%.3lf", ans);
    return 0;
}