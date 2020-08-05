#include <stdio.h>
int main()
{
int i,x, m, term = 1, sum = 1;
scanf("%d%d", &x, &m);
for(i=1; i<=m; i++)
{
term = term * x;
sum = sum + term;
}
printf("Sum = %d", sum);
return 0;
}