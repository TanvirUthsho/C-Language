#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter number of rows : ");
    scanf("%d", &rows);
    for(i=1; i<=rows; i++)
    {
        for(j=i; j<rows; j++)
        {
            printf(" ");// Print space depends on i and rows.
        }
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");// Print star according to the value of i.
        }
        printf("\n");
    }

    return 0;
}
