#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    double result1, result2;
    printf("Enter your Number Happily: ");// 2 1 is my entered number
    scanf("%lf%lf",&x);
    result1=2*pow(x,2)+3*x+1;
    result2=sqrt(3*pow(x,3)+2*pow(x,2)+4);
    printf("f(x) = 2x2 + 3x + 1=%lf\n",result1);
    printf("f(x) = √(3x3 + 2x2 + 4)=%lf\n",result2);
    //output:
    //Enter your Number Happily: 2 1   
    //f(x) = 2x2 + 3x + 1=2301341607532691500.000000
    //f(x) = ΓêÜ(3x3 + 2x2 + 4)=60851872688083.914000
    return 0;


}