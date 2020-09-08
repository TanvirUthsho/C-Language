#include<stdio.h>
void listNumbersDesc(int start, int end);
int main()
{
    int startvalue, endvalue;
    printf("Enter start value:");
    scanf("%d",&startvalue);
    printf("Enter End value:");
    scanf("%d",&endvalue);
    listNumbersDesc( startvalue, endvalue);
    return 0;
}
void listNumbersDesc(int start, int end)
{
    int i;
    for (i=end;i>=start;i--)
    {
        printf("%d\n",i);
    }
}