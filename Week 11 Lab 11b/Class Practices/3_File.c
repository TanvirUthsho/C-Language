#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    fp = fopen("test.txt", "r");
    char c;
    while ((c = getc(fp)) != EOF)
        putchar(c);
    fclose(fp);
    return 0;
}