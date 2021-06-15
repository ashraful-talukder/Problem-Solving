#include<stdio.h>
#include<string.h>

int main()
{
    char x,y,ch1[9],ch2[9];
    int d1,d2,h1,h2,m1,m2,s1,s2,s,m,h,d;
    scanf("%s %d",&ch1,&d1);
    scanf("%d %c %d %c %d",&h1,&x,&m1,&x,&s1);
    scanf("%s %d",&ch2[9],&d2);
    scanf("%d %c %d %c %d",&h2,&y,&m2,&y,&s2);

    if(s2>=s1)
        s=s2-s1;
    else
    {
        s2=s2+60;
        m2=m2-1;
        s=s2-s1;
    }
    if(m2>=m1)
        m=m2-m1;
    else
    {
        m2=m2+60;
        h2=h2-1;
        m=m2-m1;
    }
    if(h2>=h1)
        h=h2-h1;
    else
    {
        h2=h2+24;
        d2=d2-1;
        h=h2-h1;
    }
    d=d2-d1;
    if(s>=60)
    {
        m=m+1;
        s=s-60;
    }
    if(m>=60)
    {
        h=h+1;
        m=m-60;
    }
    if(h>=24)
    {
        d=d+1;
        h=h-24;
    }
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,h,m,s);
}
