#include<stdio.h>

int main()
{
    int M,N,c=0,temp,i;
    do
    {
        scanf("%d %d",&M ,&N);
        if(M<=0 || N<=0)
        {
            return 0;
        }
        else
        {
            if(M>N)
            {
                temp=M;
                M=N;
                N=temp;
            }
            for(i=M; i<=N; i++)
            {
                c=c+i;
                printf("%d ",i);
            }
            printf("Sum=%d\n",c);
        }
        c=0;
    }
    while(M!=0 && N!=0);
    return 0;
}
