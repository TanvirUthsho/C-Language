#include<stdio.h>
#include<math.h>

int main()
{
    int a,n,step=0,sign,result=0;
    printf("Enter any Number:");
    scanf("%d",&a);

    for(n=0;a>n;n++){
        sign=pow(-1,step);
        result=result+sign*(pow(a-n,2));
        step++;
    }
    printf("Result is:%d\n",result);
    return 0;

    }