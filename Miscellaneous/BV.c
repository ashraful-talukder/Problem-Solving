#include<stdio.h>

int main()
{
    int i,a=0,b=1,n,m;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            printf("%d ",a);
        }
        else
        {
            if(i==(n-1))
            {
                m=a+b;
                b=a;
                printf("%d\n",m);
                a=m;
            }
            else
            {
                m=a+b;
                b=a;
                printf("%d ",m);
                a=m;
            }
        }
    }
    return 0;
}
