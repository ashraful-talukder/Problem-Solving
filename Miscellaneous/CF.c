#include<stdio.h>

int main()
{
    float M[12][12],r=0,b;
    char a;
    int i,L,j;
    scanf("%d %c",&L ,&a);
    for(i=0 ; i<12 ; i++)
    {
        for(j=0 ; j<12 ; j++)
        {
            scanf("%f",&M[i][j]);
        }
    }
    for(i=0 ; i<12 ; i++)
    {
        r=r+M[i][L];
    }
    if(a=='S')
    {
        printf("%.1f\n",r);
    }
    else if(a=='M')
    {
        b=r/12;
        printf("%.1f\n",b);
    }
    return 0;
}
