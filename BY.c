#include<stdio.h>

int main()
{
    int T,i,PA,PB,c;
    double G1,G2,m,n;
    scanf("%d",&T);
    for(i=0; i<T ; i++)
    {
        c=0;
        scanf("%d %d",&PA ,&PB);
        scanf("%lf %lf",&G1 ,&G2);
        while(PA<=PB)
        {
            m=PA*(G1/100.0);
            n=PB*(G2/100.0);
            PA=PA+m;
            PB=PB+n;
            ++c;
            if(c>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(c<=100)
        {
            printf("%d anos.\n",c);
        }
    }
    return 0;
}
