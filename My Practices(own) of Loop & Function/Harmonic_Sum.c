// Function to return sum of 1/1 + 1/2 + 1/3 + ..+ 1/n
#include <stdio.h>
double harmonicSum(int n);
int main()
 

{
    int n ;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Sum is %f", harmonicSum(n));
    return 0;
}
double harmonicSum(int n)
{
    double i, s = 0.0;
    for (i = 1; i <= n; i++)
    {
        s = s + 1 / i;
    }
    return s;
}
