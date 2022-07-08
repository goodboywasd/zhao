#include<stdio.h>
int main()
{
    int i=5,j=5,p,q;
    p = (i++) + (i++) + (i++);
    q = (++j) + (++j) + (++j);
    printf("i=%d,j=%d\np=%d\nq=%d\n",i,j,p,q);
    return 0;
}
// 结果：
// i=8,j=8
// p=18
// q=22