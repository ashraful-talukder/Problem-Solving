#include<stdio.h>

int main()
{
    int N,i,a,b;
    scanf("%d",&N);
    int X[N];
    for(i=0 ; i<N ; i++)
    {
        scanf("%d",&X[i]);
        a=X[0];
        b=0;
    }
    for (i=1 ; i<N ; i++)
    {
        if(X[i]<a)
        {
            a=X[i];
            b=i;
        }
    }

    printf("Menor valor: %d\n",a);
    printf("Posicao: %d\n",b);
    return 0;
}
