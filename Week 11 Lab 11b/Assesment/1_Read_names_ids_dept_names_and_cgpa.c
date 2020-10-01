#include <stdio.h>
#include <conio.h>

typedef struct
{
    char name[50];
    int id;
    char dept[20];
    double cgpa;
} student;
int main()
{
    int n;
    printf("Enter number of Student:");
    scanf("%d", &n);
    getc(stdin);
    student s[n];
    FILE *fp;
    fp = fopen("Test.txt", "a");
    for (int i = 0; i < n; i++)
    {
        gets(s[i].name);
        gets(s[i].dept);
        scanf("%d", &s[i].id);
        scanf("%lf", &s[i].cgpa);
        getc(stdin);
    }
    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%s\t%s\t%d\t%lf\n", s[i].name, s[i].dept, s[i].id, s[i].cgpa);
    }
    fclose(fp);
}