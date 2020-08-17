#include <stdio.h>
void computeSum(int x, int y);
int main()
{
    int var1, var2;
    scanf("%d %d", &var1, &var2);
    computeSum(var1, var2);
    return 0;
}
void computeSum(int x, int y)
{
    int result = x + y;
    printf("%d + %d = %d\n", x, y, result);
}