#include<stdio.h>

int main()
{
    int n,m,i,j;
    scanf("%d",&n);
    int X[n+1];
    for(i=1 ; i<=n ; i++)
        scanf("%d",&X[i]);
    scanf("%d",&m);
    int Y[n+1];
    for(i=1 ; i<=m ; i++)
        scanf("%d",&Y[i]);
    int C[m+1][n+1];
    for(i=0 ; i<=m ; i++)
        C[i][0]=0;
    for(i=0 ; i<=n ; i++)
        C[0][i]=0;
    for(i=1 ; i<=m ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
            if(Y[i]==X[j])
                C[i][j]=C[i-1][j-1]+1;
            else if(C[i-1][j]>=C[i][j-1])
                C[i][j]=C[i-1][j];
            else
                C[i][j]=C[i][j-1];
        }
    }
    for(i=0 ; i<=m ; i++)
    {
        for(j=0 ; j<=n ; j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }
    printf("%d\n",C[m][n]);
    return 0;
}
