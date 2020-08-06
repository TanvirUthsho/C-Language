#include <stdio.h>
int main()
{
    float x = 0, y = 0;
    char dir;
    float mile;
    while (1)
    {
        printf("Please input the direction as N,S,E,W (0 to exit): ");
        scanf("%c", &dir);
        fflush(stdin);
        if (dir == '0')
        { /*stop input, get out of the loop */
            break;
        }
        if (dir != 'N' && dir != 'S' && dir != 'E' && dir != 'W')
        {
            printf("Invalid direction, re-enter \n");
            continue;
        }
        printf("Please input the mile in %c direction: ", dir);
        scanf("%f", &mile);
        fflush(stdin);
        if (dir == 'N')
        { /*in north, compute the y*/
            y += mile;
        }
        else if (dir == 'E')
        { /*in east, compute the x*/
            x += mile;
        }
        else if (dir == 'W')
        { /*in west, compute the x*/
            x -= mile;
        }
        else if (dir == 'S')
        { /*in south, compute the y*/
            y -= mile;
        }
    }
    printf("\nCurrentposition of A: (%4.2f,%4.2f)\n", x, y);
    return 0;
}