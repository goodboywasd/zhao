// 求解s=sin(x)
#include <math.h>
#include <stdio.h>
int main()
{
    double x,s;
    printf("input number:\n");
    scanf("%lf",&x);
    s = sin(x);
    printf("sine of %lf is %lf\n",x,s);
    return 0;
    // gcc ex1.c -o ex1.o -lm
    // ./ex1.o
}
