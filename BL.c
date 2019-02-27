#include<stdio.h>

int main()
{
    int N,i,j,x,y,c=0,temp;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        scanf("%d %d",&x ,&y);
        if(y<x)
        {
            temp=x;
            x=y;
            y=temp;
        }
        if(y-x==0 || y-x==1)
        {
            printf("0\n");
        }
        else
        {
            for(j=x+1; j<y; j++)
            {
                if(j%2!=0)
                {
                    c=c+j;
                }
            }
            printf("%d\n",c);
        }
        c=0;
    }
    return 0;
}
