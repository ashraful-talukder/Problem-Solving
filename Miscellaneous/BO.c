#include<stdio.h>

int main()
{
    int a,b,p,I=0,G=0,g=0,E=0;
    do
    {
        ++g;
        scanf("%d %d",&a ,&b);
        if(a>b)
        {
            ++I;
        }
        else if(b>a)
        {
            ++G;
        }
        else if(a==b)
        {
            ++E;
        }
        do
        {
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d",&p);
        }while(p!=1 && p!=2);
    }while(p==1);
    printf("%d grenais\n",g);
    printf("Inter:%d\n",I);
    printf("Gremio:%d\n",G);
    printf("Empates:%d\n",E);
    if(I>G)
    {
        printf("Inter venceu mais\n");
    }
    else if(G>I)
    {
        printf("Gremio venceu mais\n");
    }
    else if(I==G)
    {
        printf("Nao houve vencedor\n");
    }
    return 0;
}
