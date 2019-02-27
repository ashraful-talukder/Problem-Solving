#include<stdio.h>

int main()
{
    int N,i,p,r;
    long X;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        r=0;
        scanf("%ld",&X);
        for(p=1 ; p<X ; p++)
        {
            if(X%p==0)
            {
                r=r+p;
            }
        }
        if(r==X)
        {
            printf("%ld eh perfeito\n",X);
        }
        else
        {
            printf("%ld nao eh perfeito\n",X);
        }
    }
    return 0;
}
