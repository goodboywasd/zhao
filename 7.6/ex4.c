// 递归计算阶乘
#include<stdio.h>
int fun(int a);
int main()
{
    int n,s=1;
    printf("本程序计算'n!'\n请输入n>1:");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("超过范围，退出程序!");
        return 0;
    }
    s = fun(n);
    printf("%d！= %d",n,s);
    return 0;
}

int fun(int a)
{
    int b = a;
    if(a>1)
    {
        b *= fun(a-1);
    }
    else
    {b = 1;}
    return b;
}