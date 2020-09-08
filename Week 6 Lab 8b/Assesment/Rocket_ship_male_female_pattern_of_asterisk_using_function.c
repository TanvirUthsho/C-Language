#include <stdio.h>
//Declaring all the void functions
void triangle();
void rectangle();
void inverted();
void circle();
void rocket();
void male();
void female();

int main()
{
    //using the void functions to print all the figures
    rocket();
    printf("\n\n"); //putting lines between the figures
    male();
    printf("\n\n");
    female();
    printf("\n\n");

    return 0;
}
//The function to print rocket
void rocket()
{
    //using the triangle,rectangle,inverted void function to print rocket ship figure
    triangle();
    rectangle();
    inverted();
}

void male()
{
    //using the circle,rectangle,inverted void function to print male figure
    circle();
    rectangle();
    inverted();
}

void female()
{
    //using the circle,triangle,inverted void function to print female figure
    circle();
    triangle();
    inverted();
}
//The function to print circle
void circle()
{
    printf("   **  \n\n");
    printf(" *    *\n\n");
    printf(" *    *\n\n");
    printf("   ** \n");
}
void triangle()
{
    //Nested for loop for rows and columns
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i; j++)
        {
            if (i == 4 || j == 1 || (j == 2 * i && i != 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n"); //Using extra line to match figure ratio with sample
        printf("\n");
    }
}
//The function to print rectangle
void rectangle()
{
    //Nested for loop for rows and columns
    for (int i = 1; i <= 5; i++)
    {
        printf(" ");
        for (int j = 1; j <= 6; j++)
        {
            if (i == 1 || i == 5 || j == 1 || j == 6)
                printf("*");
            else
                printf(" ");
        }
        printf("\n"); //Using extra line to match figure ratio with sample
        printf("\n");
    }
}

void inverted()
{
    //Nested for loop for rows and columns
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i; j++)
        {
            if (j == 1 || (j == 2 * i && i != 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n"); //Using extra line to match figure ratio with sample
        printf("\n");
    }
}