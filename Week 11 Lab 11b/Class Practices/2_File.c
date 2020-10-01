#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char buffer[30];
    strcpy(buffer, "File has been created");
    fp = fopen("test.txt", "w");
    fprintf(fp, buffer);
    fclose(fp);
    return 0;
}