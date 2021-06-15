#include<stdio.h>

int main()
{
    int i,t;
    char str[100],main[100];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        gets(str);
        printf("Case %d: ",i);
        main[100]=strupr(str);
        printf("%s",main[100]);
    }
    return 0;
}

