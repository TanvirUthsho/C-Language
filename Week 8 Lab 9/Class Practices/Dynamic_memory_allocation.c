#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *data, i, n;
    scanf("%d", &n);
    data = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", data + i);
    }
    free(data);
    return 0;
}