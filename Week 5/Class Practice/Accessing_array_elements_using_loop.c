#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of Array:");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]= %d\n", i, a[i]);
    }
    return 0;
}