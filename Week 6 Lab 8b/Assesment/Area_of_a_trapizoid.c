#include <stdio.h>
double getArea(int a, int b, int h); //Declaring function prototype

int main()
{
    int A, B, H; //declaring main function variables
    double Area;

    printf("Enter a:");
    scanf("%d", &A); //taking variable inputs
    printf("Enter b:");
    scanf("%d", &B);
    printf("Enter h:");
    scanf("%d", &H);

    Area = getArea(A, B, H); //using the function to get area

    printf("Area of trapezoid:%lf", Area);

    return 0;
}

//The get area function
double getArea(int a, int b, int h)
{
    double A; //declaring function variables

    A = (1.0 / 2.0) * (a + b) * h; //calculations for finding area

    return A; //Returning  the area value to main function
}