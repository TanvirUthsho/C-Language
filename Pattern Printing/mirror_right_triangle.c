#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter number of rows: "); //It asks the user to enter the row number.
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) /*used three loops one is the outer loop to change the line 
                                  and two inner loops to print star and trailing space.*/
    {
        for (j = i; j < rows; j++)/*outer loop iterate row times and
                                    a print newline after completing the inner loop.*/
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}
