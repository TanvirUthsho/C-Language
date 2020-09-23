#include <stdio.h>
void print(struct participant *pt, int size);
struct participant
{
    char name[20];
    char country[20];
    float score;
    int age;
};
int main()
{
    int n;
    scanf("%d", &n);
    getc(stdin);
    struct participant player[n];
    for (int i = 0; i < n; i++)
    {
        gets(player[i].name);
        gets(player[i].country);
        scanf("%f", &player[i].score);
        scanf("%d", &player[i].age);
        getc(stdin);
    }
    print(player, n);
    return 0;
}
void print(struct participant *pt, int size)
{
    for (int i = 0; i < size; i++)
    {
        puts(pt[i].name);
        puts(pt[i].country);
        printf("%.2f\n", pt[i].score);
        printf("%d\n", pt[i].age);
    }
}