#include<stdio.h>
int main()
{
    int var1;
    float var2;char ch;
    printf("Enter a Character:\n");
    scanf("%c",&ch);
    printf("enter a Floating Point Number\n");
    scanf("%f",&var2);
    printf("int= %d,\n char= %c\n float= %f\n", var1, ch, var2);
    printf("int= %d,\n char= %d\n float= %d", &var1, &ch, &var2);
    return 0;
}