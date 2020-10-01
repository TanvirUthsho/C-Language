#include <stdio.h>
struct s
{

    char name[50];
    int height;
};

int main()
{

    struct s a[5];
    FILE *fptr;
    int i;
    fptr = fopen("file.txt", "r");
    for (i = 0; i < 5; ++i)
    {

        fgets(a[i].name, 50, fptr);
        fscanf(fptr, "%d", &a[i].height);
        getc(fptr);
    }

    for (i = 0; i < 5; ++i)
    {

        printf("%d:\nName: %s\n", i + 1, a[i].name);
        printf("Height: %d\n", a[i].height);
    }

    fclose(fptr);
}
