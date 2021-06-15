#include<stdio.h>

int main()
{
    int X,s,p;
    while(1)
    {
        s=0;
        p=0;
        scanf("%d",&X);
        if(X==0)
        {
            return 0;
        }
        else
        {
            while(p!=5)
            {
                if(X%2==0)
                {
                    s=s+X;
                    ++p;
                }
                ++X;
            }
            printf("%d\n",s);
        }
    }
    return 0;
}
