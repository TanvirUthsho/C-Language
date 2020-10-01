#include <stdio.h>
int main()
{
    char name[50];
    int marks, i, n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    fflush(stdin);
    FILE *fptr;
    fptr = (fopen("student.txt", "a"));
    if (fptr != NULL)
    {
        for (i = 0; i < n; ++i)
        {
            printf("For student%d\n", i + 1);
            printf("Enter name: ");
            gets(name);
            printf("Enter marks: ");
            scanf("%d", &marks);
            fflush(stdin);
            fprintf(fptr, "Name: %s\n", name);
            fprintf(fptr, "Marks: %d\n", marks);
        }
        fclose(fptr);
    }
    return 0;
}