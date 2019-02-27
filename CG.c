#include<stdio.h>

int main()
{
    double M[12][12],r=0,b;
    char a;
    int i,j;
    scanf("%c",&a);
    for(i=0 ; i<12 ; i++)
    {
        for(j=0 ; j<12 ; j++)
        {
            scanf("%lf",&M[i][j]);
        }
    }
    for(j=7 ; j<12 ; j++)
    {
        for(i=12-j ; i<j ; i++)
        {
            r=r+M[i][j];
        }
    }
    if(a=='S')
    {
        printf("%.1lf\n",r);
    }
    else if(a=='M')
    {
        b=r/30;
        printf("%.1lf\n",b);
    }
    return 0;
}
