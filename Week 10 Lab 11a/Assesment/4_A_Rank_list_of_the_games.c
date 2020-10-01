#include <stdio.h>
#include <conio.h>
struct Gamer
{
    int favorite_games;
    int list_of_favorite_games[20];
};
int main()
{
    struct Gamer g[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &g[i].favorite_games);
        getc(stdin);
        gets(g[i].list_of_favorite_games);
        getc(stdin);
    }
    int n;
    printf("Enter your choosing game: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Your best game");
        break;

    case 2:
        printf("Your second favorite game");
        break;

    case 3:
        printf("Your third favorite game");
        break;

    case 4:
        printf("Your fourth favorite");
        break;

    case 5:
        printf("Your fifth favorite game");
        break;

    default:
        printf("Your have chosen invalid option");
        break;
    }
    return 0;
}
