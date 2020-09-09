#include <stdio.h>
int main()
{
    int var = 20;
    int *ip;
    ip = &var;
    printf("Address of var: %x\n", &var);
    printf("Address stored in ip: %x\n", ip);
    printf("Value of *ip : %d\n", *ip);
    return 0;
}