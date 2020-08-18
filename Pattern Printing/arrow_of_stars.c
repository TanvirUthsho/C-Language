
#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter value of n : "); // it determine the execution of loop.
    scanf("%d", &n);         // user will define how many times loop will execute
    for(i=1; i<n; i++)        //it determine the number of row value.
    {
        for(j=1; j<=(n-i); j++) //it determines the number of colums value
        {
            printf(" ");     // print blank space of cloums
        }
        for(j=i; j<=n; j++)   // it determine the number of culums with star printed value
        {
            printf("*");
        }

        printf("\n");
    }
    for(i=1; i<=n; i++) //it determine the number of row value.
    {
        for(j=1; j<i; j++) //t determines the number of colums value
        {
            printf(" ");            //print blank space of cloums
        }
        for(j=1; j<=i; j++) //it determine the number of culums with star printed value
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}