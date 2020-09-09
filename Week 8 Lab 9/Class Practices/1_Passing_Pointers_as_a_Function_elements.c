#include <stdio.h>
void swap(int *p, int *q);
int main()
{
    int a = 2, b = 3;
    swap(&a, &b);
    printf("a= %d b= %d", a, b);
    return 0;
}
void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}