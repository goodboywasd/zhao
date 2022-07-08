#include<stdio.h>
int main()
{
    int i=8;
    printf("\ni=8,计算++i,--i,i++,i--,-i++,-i--\n");
    
    printf("printf(...,++i,--i,i++,i--,-i++,-i--)\n");
    printf("%d\n%d\n%d\n%d\n%d\n%d\n",++i,--i,i++,i--,-i++,-i--);

    i=8; 
    printf("\n拆分成多个printf():\n");
    printf("%d\n",++i);
    printf("%d\n",--i);
    printf("%d\n",i++);
    printf("%d\n",i--);
    printf("%d\n",-i++);
    printf("%d\n",-i--);
    return 0;
}