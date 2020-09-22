#include <stdio.h>

struct student
{
    char name[30];
    int id;
    float cgpa;
};

int main()
{

    struct student x;
    printf("Enter student name: ");
    gets(x.name);
    printf("Enter student id: ");
    scanf("%d", &x.id);
    printf("Enter student cgpa: ");
    scanf("%f", &x.cgpa);
    printf("Name= %s\nID= %d\nCGPA= %f", x.name, x.id, x.cgpa);
}