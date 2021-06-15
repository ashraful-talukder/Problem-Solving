#include<stdio.h>

int main()
{
    int N,i,j,c;
    long X;
    scanf("%d",&N);
    for(i=0 ; i<N ; i++)
    {
        c=0;
        scanf("%ld",&X);
        for(j=2 ; j<X ; j++)
        {
            if(X%j==0)
            {
                c=j;
                break;
            }
        }
        if(c==0)
        {
            printf("%d eh primo\n",X);
        }
        else
        {
            printf("%d nao eh primo\n",X);
        }
    }
    return 0;
}
