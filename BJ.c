#include<stdio.h>

int main()
{
    int N,a,i,C=0,R=0,S=0,total;
    char b,p;
    float m,n,o;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d%c%c",&a,&p,&b);
        if(b=='C')
        {
            C=C+a;
        }
        else if(b=='R')
        {
            R=R+a;
        }
        else if(b=='S')
        {
            S=S+a;
        }
    }
    total=C+R+S;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
    m=(C*100.00)/total;
    n=(R*100.00)/total;
    o=(S*100.00)/total;
    printf("Percentual de coelhos: %.2f %c\n",m,37);
    printf("Percentual de ratos: %.2f %c\n",n,37);
    printf("Percentual de sapos: %.2f %c\n",o,37);
    return 0;
}
