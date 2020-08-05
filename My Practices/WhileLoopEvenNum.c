#include <stdio.h>

int main()
{
    int i, n;
    n=40;
    i=11;
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("%d\n", i);
        }

        i++;
    }

    return 0;
}