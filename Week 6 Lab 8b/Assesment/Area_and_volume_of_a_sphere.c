#include <stdio.h>
#include <math.h>
#define pi 3.14159

void findArea(int radius);
void findVolume(int radius);

int main()
{
    int r;
    printf("Enter the radius:\n");
    scanf("%d", &r);
    findArea(r);
    findVolume(r);
    return 0;
}

void findArea(int radius)
{
    float area = 4 * pi * pow(radius, 2);
    printf("Area of the sphere: %f\n", area);
}

void findVolume(int radius)
{
    float volume = 4 / 3 * (pi * pow(radius, 3));
    printf("Volume of the sphere: %f\n", volume);
}