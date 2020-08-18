#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter number of rows: "); // input numbers of rows for users
    scanf("%d", &rows);
    for(i=1; i<=rows; i++)   // iretarate through rows
    {
        for(j=i; j<=rows; j++) // iretarate through colums
        {
            if(i==1 || j==i || j==rows)//print star dor the first row i=1,first colums j=1 and last colums j= rows
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n"); // move to the next line
    }

    return 0;
}