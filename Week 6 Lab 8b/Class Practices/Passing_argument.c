#include <stdio.h>
void printValue(int n);
int main()
{
    printValue(100);
    printValue(25);
    return 0;
}
void printValue(int n)
{
    printf("The number is %d\n", n);
}