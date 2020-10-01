#include <stdio.h>
#include <conio.h>
struct BarcelonaPlayer
{
    char name[20];
    int age;
    char Country[20];
    char Position[20];
    double Salary;
    double Rating;
};

int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d", &num);
    getc(stdin);
    struct BarcelonaPlayer player[num];
    for (int i = 0; i < num; i++)
    {
        gets(player[i].name);
        gets(player[i].Country);
        gets(player[i].Position);
        scanf("%d", &player[i].age);
        scanf("%lf", &player[i].Salary);
        scanf("%lf", &player[i].Rating);
        getc(stdin);
    }
    highestPaidPlayer(player, num);
    findPlayers(player, num);
    return 0;
}
void highestPaidPlayer(struct BarcelonaPlayer *pt, int size)
{

    for (int i = 0; i < size; i++)
    {
        puts(pt[i].name);
        puts(pt[i].Country);
        puts(pt[i].Position);
        printf("%d\n", pt[i].age);
        printf("%lf\n", pt[i].Salary);
        printf("%lf\n", pt[i].Rating);
    }
    for (int i = 0; i < size; i++)
    {
        if (pt[i].Salary < pt[i + 1].Salary)
        {
            pt[i].Salary = pt[i + 1].Salary;
        }
        printf("\nMaximum salary of the player:%lf\n", pt[i].Salary);
        break;
    }
}
void findPlayers(struct BarcelonaPlayer *pt, int size)
{

    char name[15];
    int found = 0;
    printf("\nEnter name you want to search:");
    gets(name);

    for (int j = 0; j < size; j++)
    {
        if (strcmp(pt[j].Country, name) == 0)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("Argentina player found");
    else
        printf("Argentina player not found");
}