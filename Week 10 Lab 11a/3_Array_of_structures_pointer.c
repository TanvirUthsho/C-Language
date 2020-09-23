#include <stdio.h>
#include <string.h>
typedef struct participant
{
    char name[20];
    char country[20];
    float score;
    int age;
} P;
int main()
{
    P player[2];
    for (int i = 0; i < 2; i++)
    {
        gets(player[i].name);
        gets(player[i].country);
        scanf("%f", &player[i].score);
        scanf("%d", &player[i].age);
        getc(stdin);
    }
    for (int i = 0; i < 2; i++)
    {
        puts(player[i].name);
        puts(player[i].country);
        printf("%.2f\n", player[i].score);
        printf("%d\n", player[i].age);
    }
    return 0;
}