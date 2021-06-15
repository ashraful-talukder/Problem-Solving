#include<stdio.h>

int main()
{
    int i,j,k,a,b;
    while(1)
    {
        scanf("%d",&a);
        if(a==0)
        {
            break;
        }
        else
        {
            int l=1;
            int b[a][a];
            for(i=0 ; i<a ; i++)
            {
                k=l;
                for(j=0 ; j<a ; j++)
                {
                    b[i][j]=k;
                    k=k*2;
                }
                l=l*2;
            }
            for(i=0 ; i<a ; i++)
            {
                for(j=0 ; j<a ; j++)
                {
                    if(j==a-1)
                    {
                        printf("%d\n",b[i][j]);
                    }
                    else
                    {
                        printf("%d ",b[i][j]);
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
