#include <stdio.h>

int main()
{
    int i, j, rows;
    int stars, spaces;

    printf("Enter rows to print : ");
    scanf("%d", &rows); // user defined input

    stars = 1;
    spaces = rows - 1;
    for (i = 1; i < rows * 2; i++) //To iterate through rows, run an outer loop from 1 to rows*2-1. The loop structure should look like
    {
        for (j = 1; j <= spaces; j++) //To print spaces, run an inner loop from 1 to spaces. The loop structure should look like for(j=1; j<=spaces; j++). Inside this loop print single space.
            printf(" ");
        for (j = 1; j < stars * 2; j++) //To print stars, run another inner loop from 1 to stars*2-1. The loop structure should look like for(j=1; j<=stars; j++). Inside this loop print star.
            printf("*");
        printf("\n");

        if (i < rows) //Check if(i < rows) then increment stars and decrement spaces. Otherwise increment spaces and decrement stars.
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }

    return 0;
}