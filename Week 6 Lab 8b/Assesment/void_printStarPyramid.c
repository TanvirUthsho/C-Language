#include <stdio.h>

void printStarPyramid(int lines);
int main()
{
    int rows;
    printf("Enter number of rows : ");
    scanf("%d", &rows);
    printStarPyramid(rows);
    return 0;
}

void printStarPyramid(int lines)
{
    int i, j;
    for(i=1; i<=lines; i++)
    {
        for(j=i; j<lines; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

}