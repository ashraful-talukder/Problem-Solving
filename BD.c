#include<stdio.h>

int main()
{
    int a,b,i,c,d,j;
    scanf("%d %d %d %d",&a,&c,&b,&d);
    if(a==b && c==d)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
    {
        i=b-a;
        j=d-c;
        if(i<0)
        {
            i=i+24;
        }
        if(j<0)
        {
            j=j+60;
            i--;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",i,j);
    }
    return 0;
}
