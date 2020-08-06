#include <stdio.h>
int main()
{
    int number, i, flag = 1;
    scanf("%d", &number);
    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("%d is a prime number", number);
    else
        printf("%d is not a prime number", number);
    return 0;
}