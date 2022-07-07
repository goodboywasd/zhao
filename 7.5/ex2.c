// 返回2个整数中较大的
#include <stdio.h>

int maxof2(int a,int b);
int main()
{
    int x,y,z;
    char ok='n';
    printf("input 2 int numbers:\n");
    while((ok))
    {
        
        scanf("%d %d",&x,&y);
        getchar();
        printf("first is %d\nsecond is %d\nIs ok?[Y]/[N]\n",x,y);       
        scanf("%c",&ok);
        if((ok=='y')||(ok=='Y'))
        {
            z = maxof2(x,y);
            printf("\nmaxmum = %d",z);
            return 0; 
        }
        else
        {
            printf("reinput 2 int num:\n");
        }
    }    
}


int maxof2(int a,int b)
{
    if(a>b)
        return a;
    else  
        return b;
}