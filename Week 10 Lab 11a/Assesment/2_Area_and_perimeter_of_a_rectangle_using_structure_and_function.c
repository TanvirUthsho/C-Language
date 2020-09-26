#include <stdio.h>

struct Shape //Declaring structure for keeping length and width input
{
    double length;
    double width;
};

int findArea(struct Shape R);      //declaring function prototype for finding area
int findPerimeter(struct Shape R); //declaring function prototype for finding perimeter

int main()
{
    int area, perimeter;
    struct Shape rectangle; //Declaring variable named "rectangle" of "struct shape" data type

    printf("Enter rectangle length: "); //taking inputs
    scanf("%lf", &rectangle.length);

    printf("Enter rectangle width: ");
    scanf("%lf", &rectangle.width);

    area = findArea(rectangle);           //calling the function by value to find area
    perimeter = findPerimeter(rectangle); //calling the function by value to find perimeter

    printf("\nArea: %d", area);
    printf("\nPerimeter: %d\n", perimeter);

    return 0;
}

int findArea(struct Shape R) //function to find area
{
    int A = R.length * R.width;
    return A;
}

int findPerimeter(struct Shape R) //function to find perimeter
{
    int P = 2 * (R.length + R.width);
    return P;
}