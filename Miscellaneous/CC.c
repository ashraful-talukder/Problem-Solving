#include<stdio.h>

int main()
{
    int T,N[1000],i,j;
    scanf("%d",&T);
    for(i=0 ; i<1000 ; i++)
    {
        for(j=0 ; j<T ; j++)
        {
            if(i>=1000)
            {
                return 0;
            }
            else
            {
                printf("N[%d] = %d\n",i,j);
                i++;
            }
        }
        --i;
    }
    return;
}
