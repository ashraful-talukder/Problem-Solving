#include<stdio.h>

int main()
{
    int a,r,T=0,i;
    scanf("%d",&r);
    for(i=0 ; i<5 ; i++)
    {
        scanf("%d",&a);
        if(a==r)
            ++T;
    }
    printf("%d\n",&T);
    return 0;
}

