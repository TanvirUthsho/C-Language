#include <stdio.h>
typedef struct participant
{
    char name[20];
    char country[20];
    float score;
    int age;
} P;
int main()
{
    P player1 = {"David", "Spain", 9.65, 25};
    printf("%s\n", player1.name);
    printf("%s\n", player1.country);
    printf("%.2f\n", player1.score);
    printf("%d\n", player1.age);
    return 0;
}