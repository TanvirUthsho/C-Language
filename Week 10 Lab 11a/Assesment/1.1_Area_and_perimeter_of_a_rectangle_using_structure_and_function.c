//Program to find the area and perimeter of a rectangle using structure and function
#include <stdio.h>
#include <conio.h>
struct Shape
{
    double length;
    double width;
};
int main()
{
    struct Shape R;
    printf("Enter length:");
    scanf("%lf", &R.length);
    printf("Enter width:");
    scanf("%lf", &R.width);
    printf("Area of a Rectangle:%d\n", findArea(R));
    printf("Perimeter of a Rectangle:%d\n", findPerimeter(R));
    return 0;
}
int findArea(struct Shape R)
{
    int area;
    area = R.length * R.width;
    return area;
}
int findPerimeter(struct Shape R)
{
    int p;
    p = 2 * (R.length + R.width);
    return p;
}
