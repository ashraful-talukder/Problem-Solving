#include<stdio.h>

int main()
{
    long long N,m,x=0,y=1;
    int T,i,j;
    scanf("%d",&T);
    for(i=0 ; i<T ; i++)
    {
        scanf("%lld",&N);
        for(j=0 ; j<=N ; j++)
        {
            if(j<=0)
            {
                m=0;
            }
            else
            {
                m=x+y;
                y=x;
                x=m;
            }
        }
        printf("Fib(%lld) = %lld\n",N,m);
        x=0;
        y=1;
    }
    return 0;
}
