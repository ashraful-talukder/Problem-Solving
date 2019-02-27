#include<stdio.h>

int main()
{
    int T,i,n,j;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&n);
        for(j=0;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
