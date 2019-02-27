#include<stdio.h>

int main()
{
    int a,b,c,d,w,x,y,z,m,n,o,p;
    char r[12],s[8];
    scanf("%c%c%c%c%d",&s[0],&s[1],&s[2],&s[3],&a);
    scanf("%d%c%c%c",&b,&r[0],&r[1],&r[2]);
    scanf("%d%c%c%c",&c,&r[3],&r[4],&r[5]);
    scanf("%d",&d);
    scanf("%c%c%c%c%d",&s[4],&s[5],&s[6],&s[7],&w);
    scanf("%d%c%c%c",&x,&r[6],&r[7],&r[8]);
    scanf("%d%c%c%c",&y,&r[9],&r[10],&r[11]);
    scanf("%d",&z);
    m=w-a;
    n=x-b;
    o=y-c;
    p=z-d;
    if(p<0)
    {
        p=p+60;
        o--;
    }
    if(o<0)
    {
        o=o+60;
        n--;
    }
    if(n<0)
    {
        n=n+24;
        m--;
    }
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",m,n,o,p);
    return 0;
}
