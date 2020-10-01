#include <stdio.h>
#include <conio.h>

typedef struct MovieStar
{
    char Name[20];
    float Rating;
    int TotalFans;
} p;
int main()
{
    int n;
    scanf("%d", &n);
    getc(stdin);
    p st[n];
    for (int i = 0; i < n; i++)
    {
        gets(st[i].Name);
        scanf("%f", &st[i].Rating);
        scanf("%d", &st[i].TotalFans);
        getc(stdin);
    }
    for (int i = 0; i < n; i++)
    {
        puts(st[i].Name);
        printf("%f\n", st[i].Rating);
        printf("%d\n", st[i].TotalFans);
    }
    return 0;
}