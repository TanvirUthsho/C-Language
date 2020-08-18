#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");// Printing star according to the value of i.
        }
        for(j=1; j<=(rows*2 -(2*i-1)); j++)
        {
            printf("*");// It will help to print new line.
        }
        printf("\n");
    }

    return 0;
}
