#include <stdio.h>
#include <conio.h>
struct student
{
    char name[50];
    char dept[20];
};
int main()
{
    int n;
    printf("Enter number of Student:");
    scanf("%d", &n);
    getc(stdin);
    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        gets(s[i].name);
        gets(s[i].dept);
    }
    pintByDept(s, n);
    return 0;
}
void pintByDept(struct student *pt, int size)
{

    for (int i = 0; i < size; i++)
    {
        puts(pt[i].name);
        puts(pt[i].dept);
        getc(stdin);
    }
    char ch[10];
    int found = 0;
    printf("Enter department Name:\n");
    gets(ch);
    FILE *fp;
    fp = fopen("Test.txt", "a");

    for (int j = 0; j < size; j++)
    {
        if (strcmp(pt[j].dept, ch) == 0)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        fprintf(fp, "Your desired department have been Found:%s", ch);

    else
        printf("Not Found");
}
