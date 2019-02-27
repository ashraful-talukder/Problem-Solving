#include<stdio.h>

int main()
{
    int m,n,i,j;
    printf("Enter the size of the first array: ");
    scanf("%d",&m);
    int X[m];
    printf("Enter the first array values:\n");
    for(i=0 ; i<m ; i++)
    {
        scanf("%d",&X[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d",&n);
    int Y[n];
    printf("Enter the second array values:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&Y[i]);
    }
    int C[m][n];
    for(i=0 ; i<m ; i++)
    {
        C[i][0]=0;
    }
    for(i=0 ; i<n ; i++)
    {
        C[0][i]=0;
    }
    for(i=1 ; i<=m ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
            if(X[i]==Y[j])
            {
                C[i][j]=C[i-1][j-1]+1;
            }
            else if(C[i-1][j]>C[i][j-1])
            {
                C[i][j]=C[i-1][j];
            }
            else
            {
                C[i][j]=C[i][j-1];
            }
        }
    }
    printf("The answer is: %d\n",C[m][n]);
    return 0;
}
