#include <stdio.h>
#include <string.h> 
int main()
{

    FILE *fp;
    fp = fopen("append.txt", "a");
    fprintf(fp, "Append mode");
    fclose(fp);
    return 0;
}