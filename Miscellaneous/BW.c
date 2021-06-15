#include<stdio.h>

int main()
{
    int n,i,p,j=0,x,y;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        p=0;
        j=0;
        scanf("%d %d",&x ,&y);
        while(p!=y)
        {
            if(x%2!=0)
            {
                j=j+x;
                ++p;
            }
            x++;
        }
        printf("%d\n",j);
    }
    return 0;
}
