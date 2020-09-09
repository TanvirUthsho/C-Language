#include <stdio.h>
int main()
{
    int arr[4] = {2, 5, 1, 6};
    int *ptr = arr;
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("*ptr[%d]=%d\n", i, *(ptr + i));
    }
    return 0;
}