#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, y1, x2, y2; // Four Co-ordinate integer x1, x2, y1, y2
    printf("Enter the movements of x1,y1,x2 and y2:\n");

    while (scanf("%d %d %d %d", &x1, &y1, &x2, &y2))
    {
        if (x1 >= 9 || y1 >= 9 || x2 >= 9 || y2 >= 9)
            break;
        if (x1 <= 0 || y1 < 0 || x2 <= 0 || y2 <= 0)
            break;
        if (x1 == x2 && y1 == y2)
            printf("move=0\n");

        else if (x1 == x2 || y1 == y2)
            printf("move=1\n");

        else if (abs(x1 - x2) == abs(y1 - y2))
            printf("move=1\n");

        else
            printf("move=2\n");
    }

    return 0;
}